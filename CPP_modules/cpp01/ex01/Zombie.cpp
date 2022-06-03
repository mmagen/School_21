#include "Zombie.hpp"

Zombie::Zombie() {};

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void) {
	std::cout << name << ": has died" << std::endl;
}

void	Zombie::set_name(std::string name) {
	this->name = name;
}

void	Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
