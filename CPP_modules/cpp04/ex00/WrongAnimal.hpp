#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
	std::string _type;

public:
	WrongAnimal( void );
	~WrongAnimal( void );
	WrongAnimal( const WrongAnimal& toCopy );
	WrongAnimal& operator=( const WrongAnimal& value );

	void makeSound() const;
	std::string getType() const;
	void setType( const std::string &value );
};

#endif