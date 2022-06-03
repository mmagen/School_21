#ifndef CPP01_ZOMBIE_H
#define CPP01_ZOMBIE_H
#include <iostream>

class Zombie
{
private:
	std::string name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	
	void announce();
	void	set_name(std::string);
};
#endif
