#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat( void );
	~Cat( void );
	Cat( const Cat& toCopy );
	Cat& operator=( const Cat& value );

	virtual void makeSound() const;
};

#endif