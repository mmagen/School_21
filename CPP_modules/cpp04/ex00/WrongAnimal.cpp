#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << "An instance of WrongAnimal class was born!" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	if (!(this->_type.empty()))
		std::cout << "A " << _type << " of WrongAnimal class is dead now!" << std::endl;
	else
		std::cout << "An instance of WrongAnimal class is dead now!" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& toCopy ) {
	std::cout << "An instance was copied as an WrongAnimal class!" << std::endl;
	*this = toCopy;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& value ) {
	if (this == &value)
		return *this;
	std::cout << "An instance was assignated as an WrongAnimal class!" << std::endl;
	this->_type = value._type;
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "An instance of WrongAnimal class makes a regular WrongAnimal sound!" << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->_type;
}

void WrongAnimal::setType( const std::string &value ) {
	this->_type = value;
}
