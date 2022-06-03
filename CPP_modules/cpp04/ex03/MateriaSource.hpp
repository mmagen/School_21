#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* _materias[4];
	int	_current_materia;

public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource& toCopy);
	MateriaSource& operator=(const MateriaSource& value);

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};

#endif