#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal() {
	std::cout << "An instance of WrongCat class was born!" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat( void ) {
	if (!(this->_type.empty()))
		std::cout << "An instance of WrongCat class is dead now!" << std::endl;
	else
		std::cout << "A " << _type << " of WrongCat class is dead now!" << std::endl;
}

WrongCat::WrongCat( const WrongCat& toCopy ) {
	std::cout << "An instance was copied as an WrongCat class!" << std::endl;
	*this = toCopy;
}

WrongCat& WrongCat::operator=( const WrongCat& value ) {
	if (this == &value)
		return *this;
	std::cout << "An instance was assignated as an WrongCat class!" << std::endl;
	this->_type = value._type;
	return *this;
}

void WrongCat::makeSound() const{
	std::cout << "An instance of WrongCat class says \"WrongMeow\"!" << std::endl;
}
