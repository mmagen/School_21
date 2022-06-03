#include "Character.hpp"

Character::Character() : _current_materia(0) {
	for (int i = 0; i < 4; i++)
		this->_materias[i] = 0;
}

Character::Character( const std::string &name ) : _name(name), _current_materia(0) {
	for (int i = 0; i < 4; i++)
		this->_materias[i] = 0;
}

Character::~Character() {
	for (int i = 0; i < this->_current_materia; i++)
		delete this->_materias[i];
}


Character::Character( const Character& toCopy ) : _name(toCopy._name), _current_materia(toCopy._current_materia) {
	for (int i = 0; i < this->_current_materia; i++)
		this->_materias[i] = toCopy._materias[i]->clone();
	for (int i = this->_current_materia; i < 4; i++)
		this->_materias[i] = 0;
}

Character& Character::operator=( const Character& value ) {
	if (this == &value)
		return *this;
	this->_name = value._name;
	this->_current_materia = value._current_materia;
	for (int i = 0; i < this->_current_materia; i++)
		delete (this->_materias[i]);
	for (int i = 0; i < _current_materia; i++)
		this->_materias[i] = value._materias[i]->clone();
	for (int i = this->_current_materia; i < 4; i++)
		this->_materias[i] = 0;
	return *this;
}

std::string const & Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* m) {
	if (this->_current_materia == 4 || m == 0)
		return;
	this->_materias[_current_materia++] = m;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > this->_current_materia || this->_current_materia == 0)
		return;
	for (int i = idx; i < this->_current_materia; i++)
	{
		this->_materias[i] = this->_materias[i + 1];
		this->_materias[i + 1] = 0;
	}
	this->_current_materia--;
}

void Character::use(int idx, ICharacter& target) {
	if (idx > 3 || idx < 0 || this->_materias[idx] == 0)
		return;
	this->_materias[idx]->use(target);
}