#include "Animal.hpp"

Animal::Animal( void ) {
	std::cout << "An instance of Animal class was born!" << std::endl;
}

Animal::~Animal( void ) {
	if (!(this->_type.empty()))
		std::cout << "A " << _type << " of Animal class is dead now!" << std::endl;
	else
		std::cout << "An instance of Animal class is dead now!" << std::endl;
}

Animal::Animal( const Animal& toCopy ) {
	std::cout << "An instance was copied as an Animal class!" << std::endl;
	*this = toCopy;
}

Animal& Animal::operator=( const Animal& value ) {
	if (this == &value)
		return *this;
	std::cout << "An instance was assignated as an Animal class!" << std::endl;
	this->_type = value._type;
	return *this;
}

void Animal::makeSound() const {
	std::cout << "An instance of Animal class makes a regular Animal sound!" << std::endl;
}

std::string Animal::getType() const {
	return this->_type;
}

void Animal::setType( const std::string &value ) {
	this->_type = value;
}
