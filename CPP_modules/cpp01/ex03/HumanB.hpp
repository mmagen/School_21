#ifndef CPP01_HUMANB_H
#define CPP01_HUMANB_H
#include "Weapon.hpp"
class HumanB
{
	Weapon *weapon;
	std::string name;
public:
	HumanB(std::string name);
	void setWeapon(Weapon &weapon);
	void attack();
};
#endif 
