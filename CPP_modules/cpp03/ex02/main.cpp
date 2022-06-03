#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap hero("Sab Ziro");
	ClapTrap second_hero = hero;

	ScavTrap hero2("Tokimooto");
	ScavTrap hero3("Banshi");

	FragTrap hero4("Troy");

	hero4.highFivesGuys();
	hero4.attack("Banshi");
	hero.attack("self");
	hero2.attack("Sab Ziro");
	hero2.takeDamage(7);
	hero2.beRepaired(4);
	hero2.guardGate();
}