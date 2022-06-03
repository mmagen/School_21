#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat( void );
	~WrongCat( void );
	WrongCat( const WrongCat& toCopy );
	WrongCat& operator=( const WrongCat& value );

	void makeSound() const;

};

#endif