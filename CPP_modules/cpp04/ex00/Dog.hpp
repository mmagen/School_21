#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog( void );
	~Dog( void );
	Dog( const Dog& toCopy );
	Dog& operator=( const Dog& value );

	virtual void makeSound() const;
};

#endif