#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {

}

Ice::~Ice() {

}

Ice::Ice(const Ice& toCopy) {
	*this = toCopy;
}

Ice& Ice::operator=(const Ice& value) {
	if (this == &value)
		return *this;
	this->_type = value._type;
	return *this;
}

AMateria* Ice::clone() const {
	Ice* i = new Ice();
	return i;
}
void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
