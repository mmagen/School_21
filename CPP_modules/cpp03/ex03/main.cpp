#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap hero("Diamond");

	hero.attack("Sab Ziro");
	hero.whoAmI();
	hero.beRepaired(10);
	hero.takeDamage(6);
}