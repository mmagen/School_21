#ifndef CPP01_HUMANA_H
#define CPP01_HUMANA_H

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon &weapon;
	std::string name;
public:
	HumanA(std::string name, Weapon &weapon);
	void attack();
};
#endif
