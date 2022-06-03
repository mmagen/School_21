#ifndef CPP01_ZOMBIE_H
#define CPP01_ZOMBIE_H
#include <iostream>

class Zombie
{
private:
	std::string name;

public:
	Zombie(std::string name);
	void announce();
	~Zombie();
};
#endif
