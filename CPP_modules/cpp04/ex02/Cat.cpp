#include "Cat.hpp"

Cat::Cat( void ) : Animal() {
	std::cout << "An instance of Cat class was born!" << std::endl;
	this->_type = "Cat";
	this->_CatBrain = new Brain();
}

Cat::~Cat( void ) {
	if (!(this->_type.empty()))
		std::cout << "An instance of Cat class is dead now!" << std::endl;
	else
		std::cout << "A " << _type << " of Cat class is dead now!" << std::endl;
	delete _CatBrain;
}

Cat::Cat( const Cat& toCopy ) {
	std::cout << "An instance was copied as an Cat class!" << std::endl;
	delete _CatBrain;
	this->_CatBrain = new Brain(*toCopy._CatBrain);
	this->_type = toCopy._type;
}

Cat& Cat::operator=( const  Cat& value ) {
	if (this == &value)
		return *this;
	std::cout << "An instance was assignated as an Cat class!" << std::endl;
	delete _CatBrain;
	this->_CatBrain = new Brain(*value._CatBrain);
	for (int i = 0; i < 100 ; i++)
		this->_CatBrain[i] = value._CatBrain[i];
	this->_type = value._type;
	return *this;
}

void Cat::makeSound() const{
	std::cout << "An instance of Cat class says \"Meow\"!" << std::endl;
}
