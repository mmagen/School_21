#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(std::string name):
ClapTrap(name+"_clap_name", FragTrap::HP,
		 ScavTrap::EP, FragTrap::DMG)
{
	_name = name;
	std::cout << name <<  " finish was recreate\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), _name(copy._name)
{
	std::cout << "A "<< copy._name << " cloning successful\n";
}

DiamondTrap DiamondTrap::operator=(const DiamondTrap &copy)
{
	std::cout << "A "<< copy._name << " cloning successful\n";
	_name = copy._name;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << _name << " finish him\n";
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << _name << ", but my clapTrap name is "
	<< ClapTrap::get_name() <<"\n";
}