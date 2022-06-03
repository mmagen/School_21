#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria* _materias[4];
	int	_current_materia;

public:
	Character();
	virtual ~Character();
	Character( const std::string &name );
	Character( const Character& toCopy );
	Character& operator=( const Character& value );

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif