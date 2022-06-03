#include "Cat.hpp"

Cat::Cat( void ) : Animal() {
	std::cout << "An instance of Cat class was born!" << std::endl;
	this->_type = "Cat";
}

Cat::~Cat( void ) {
	if (!(this->_type.empty()))
		std::cout << "An instance of Cat class is dead now!" << std::endl;
	else
		std::cout << "A " << _type << " of Cat class is dead now!" << std::endl;
}

Cat::Cat( const Cat& toCopy ) {
	std::cout << "An instance was copied as an Cat class!" << std::endl;
	*this = toCopy;
}

Cat& Cat::operator=( const Cat& value ) {
	if (this == &value)
		return *this;
	std::cout << "An instance was assignated as an Cat class!" << std::endl;
	this->_type = value._type;
	return *this;
}

void Cat::makeSound() const{
	std::cout << "An instance of Cat class says \"Meow\"!" << std::endl;
}
