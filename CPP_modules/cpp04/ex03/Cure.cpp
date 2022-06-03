#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure& toCopy) : AMateria(toCopy._type) {}

Cure& Cure::operator=(const Cure& value) {
	if (this == &value)
		return *this;
	this->_type = value._type;
	return *this;
}

AMateria* Cure::clone() const {
	Cure* c = new Cure();
	return c;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals "<< target.getName() <<"'s wounds *" << std::endl;
}