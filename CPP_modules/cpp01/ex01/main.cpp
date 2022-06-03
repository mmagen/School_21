#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void) {
	Zombie	*horde = zombieHorde(3, "Bob");

	for (int i = 0; i < 3; i++)
		horde[i].announce();
	
	delete [] horde;
}
