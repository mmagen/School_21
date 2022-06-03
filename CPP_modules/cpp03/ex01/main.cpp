#include "ScavTrap.hpp"

int main()
{
	ClapTrap hero("Sab Ziro");
	ClapTrap second_hero = hero;

	ScavTrap hero2("Tokimooto");
	ScavTrap hero3("Banshi");

	hero.attack("self");
	hero2.attack("Sab Ziro");
	hero3.attack("Sab Ziro");
	hero2.takeDamage(7);
	hero2.beRepaired(4);
	hero2.guardGate();

	hero.takeDamage(1);
}