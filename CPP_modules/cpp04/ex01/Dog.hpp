#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal, public Brain
{
private:
	Brain* _DogBrain;

public:
	Dog( void );
	virtual ~Dog( void );
	Dog( const Dog& toCopy );
	Dog& operator=( const Dog& value );

	virtual void makeSound() const;
};

#endif