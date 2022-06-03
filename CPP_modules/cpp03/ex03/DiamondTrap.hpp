#ifndef MODULE_CPP_DIAMONDTRAP_H
#define MODULE_CPP_DIAMONDTRAP_H
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
class DiamondTrap: public FragTrap, public ScavTrap
{
private:
	std::string _name;
public:
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& copy);
	DiamondTrap operator=(const DiamondTrap& copy);
	~DiamondTrap();
	void attack(std::string const & target);
	void whoAmI();
};
#endif
