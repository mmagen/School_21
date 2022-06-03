#ifndef MODULE_CPP_SCAVTRAP_H
#define MODULE_CPP_SCAVTRAP_H
#include "ClapTrap.hpp"
class ScavTrap: public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& copy);
	ScavTrap& operator=(const ScavTrap& copy);
	~ScavTrap();
	void guardGate();
	void attack(std::string const & target);
};
#endif
