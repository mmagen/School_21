#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	set_hp(100);
	set_ep(100);
	set_ad(30);
	std::cout << "Noname was created by man\n";
}

FragTrap::FragTrap(std::string name)
{
	set_name(name);
	set_hp(100);
	set_ep(100);
	set_ad(30);
	std::cout << name << " was created by man\n";
}

FragTrap::FragTrap(const FragTrap &copy)
{
	set_name(copy.get_name());
	std::cout << "A "<< copy.get_name() << " clone was created\n";
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "A "<< copy.get_name() << " clone was created\n";
	set_name(copy.get_name());
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << this->get_name() << " was turned off\n";
}

void FragTrap::highFivesGuys()
{
	std::cout << "Give me fives, Guys\n";
}