#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <iomanip>

class Animal
{
protected:
	std::string _type;

public:
	Animal( void );
	virtual ~Animal( void );
	Animal( const Animal& toCopy );
	Animal& operator=( const Animal& value );

	virtual void makeSound() const = 0;
	std::string getType() const;
	void setType( const std::string &value );
};

#endif