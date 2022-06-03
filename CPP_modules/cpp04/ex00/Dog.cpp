#include "Dog.hpp"

Dog::Dog( void ) : Animal() {
	std::cout << "An instance of Dog class was born!" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog( void ) {
	if (!(this->_type.empty()))
		std::cout << "An instance of Dog class is dead now!" << std::endl;
	else
		std::cout << "A " << _type << " of Dog class is dead now!" << std::endl;
}

Dog::Dog( const Dog& toCopy ) {
	std::cout << "An instance was copied as an Dog class!" << std::endl;
	*this = toCopy;
}

Dog& Dog::operator=( const Dog& value ) {
	if (this == &value)
		return *this;
	std::cout << "An instance was assignated as an Dog class!" << std::endl;
	this->_type = value._type;
	return *this;
}

void Dog::makeSound() const{
	std::cout << "An instance of Dog class says \"Woof\"!" << std::endl;
}

