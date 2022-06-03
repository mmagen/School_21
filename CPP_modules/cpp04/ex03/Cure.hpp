#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	virtual ~Cure();
	Cure(const Cure& toCopy);
	Cure& operator=(const Cure& value);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif