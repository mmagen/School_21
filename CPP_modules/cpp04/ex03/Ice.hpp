#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	virtual ~Ice();
	Ice(const Ice& toCopy);
	Ice& operator=(const Ice& value);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif