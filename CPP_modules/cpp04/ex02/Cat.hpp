#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal, public Brain
{
private:
	Brain* _CatBrain;

public:
	Cat( void );
	virtual ~Cat( void );
	Cat( const Cat& toCopy );
	Cat& operator=( const Cat& value );

	virtual void makeSound() const;
};

#endif