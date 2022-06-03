#include "ClapTrap.hpp"

int main()
{
	ClapTrap hero("Sab Ziro");
	ClapTrap second_hero = hero;

	second_hero.attack("Sab Ziro");
	second_hero.takeDamage(7);
	second_hero.beRepaired(4);

	hero.takeDamage(1);
}