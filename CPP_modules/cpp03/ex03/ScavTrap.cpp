#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	set_hp(100);
	set_ep(50);
	set_ad(20);
	std::cout << "Noname risen from the ashes\n";
}

ScavTrap::ScavTrap(std::string name)
{
	set_name(name);
	set_hp(100);
	set_ep(50);
	set_ad(20);
	std::cout << name << " risen from the ashes\n";
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	set_name(copy.get_name());
	std::cout << "The hero steals the soul "<< copy.get_name() << "\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "The hero steals the soul "<< copy.get_name() << "\n";
	set_name(copy.get_name());
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << this->get_name() << " was frozen forever\n";
}

void ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap " << get_name() << " attacked a monster: " << target
	<< " and inflicted " << get_damage() << " damage!\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->get_name()
	<< " have enterred in Gate keeper mode\n";
}
