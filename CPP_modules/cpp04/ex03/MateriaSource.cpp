#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _current_materia(0) {
	for (int i = 0; i < 4; i++)
		this->_materias[i] = 0;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < _current_materia; i++)
		delete (this->_materias[i]);
}


MateriaSource::MateriaSource(const MateriaSource& toCopy) : _current_materia(toCopy._current_materia) {
	for (int i = 0; i < this->_current_materia; i++)
		this->learnMateria(toCopy._materias[i]);
	for (int i = this->_current_materia; i < 4; i++)
		this->_materias[i] = 0;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& value) {
	for (int i = 0; i < this->_current_materia; i++)
		delete this->_materias[i];
	this->_current_materia = value._current_materia;
	for (int i = 0; i < this->_current_materia; i++)
		this->learnMateria(value._materias[i]);
	for (int i = this->_current_materia; i < 4; i++)
		this->_materias[i] = 0;
	return (*this);
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < this->_current_materia; i++)
	{
		if (this->_materias[i]->getType() == type)
			return (this->_materias[i]->clone());
	}
	return (0);
}

void MateriaSource::learnMateria(AMateria* m) {
	if (!m || this->_current_materia == 4)
		return;
	for (int i = 0; i > this->_current_materia; i++)
	{
		if (this->_materias[i] == m)
			return;
	}
	this->_materias[this->_current_materia++] = m;
}