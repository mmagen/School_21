#ifndef MODULE_CPP_SCAVTRAP_H
#define MODULE_CPP_SCAVTRAP_H
#include "ClapTrap.hpp"
class ScavTrap: virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& copy);
	ScavTrap& operator=(const ScavTrap& copy);
	~ScavTrap();
	void guardGate();
	void attack(std::string const & target);
	static const int HP = 100;
	static const int EP = 50;
	static const int DMG = 20;
};
#endif
