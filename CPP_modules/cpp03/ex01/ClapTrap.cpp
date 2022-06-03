#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Noname has been born\n";
	_hitpoints = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitpoints = 10;
	_energy_points = 10;
	_attack_damage = 0;
	std::cout << name << " has been born\n";
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "The new hero clones "<< copy.get_name() << "\n";
	_name = copy.get_name();
	_hitpoints = copy.get_hitpoint();
	_energy_points = copy.get_energy_point();
	_attack_damage = copy.get_damage();
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "The new hero clones "<< copy.get_name() << "\n";
	_name = copy.get_name();
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " died\n";
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << _name << " attack " << target << ", causing ";
	std::cout << _attack_damage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitpoints -= amount;
	std::cout << "ClapTrap " << _name << " was hit for "
	<< amount << " damage and have now " << _hitpoints << " hitpoints\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_hitpoints += amount;
	_energy_points -= amount;
	std::cout << "ClapTrap " << _name << " recovered "
	<< amount << " health units and have now " << _hitpoints << " hitpoints\n";
}

std::string ClapTrap::get_name() const
{
	return (_name);
}

int ClapTrap::get_damage() const
{
	return (_attack_damage);
}

int ClapTrap::get_energy_point() const
{
	return (_energy_points);
}

int ClapTrap::get_hitpoint() const
{
	return (_hitpoints);
}

void ClapTrap::set_name(std::string name)
{
	_name = name;
}

void ClapTrap::set_hp(int hp)
{
	_hitpoints = hp;
}

void ClapTrap::set_ep(int ep)
{
	_energy_points = ep;
}

void ClapTrap::set_ad(int ad)
{
	_attack_damage = ad;
}