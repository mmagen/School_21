#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{
	Zombie *zomb = newZombie("Bob");

	zomb->announce();
	delete zomb;
	randomChump("Tom");
}