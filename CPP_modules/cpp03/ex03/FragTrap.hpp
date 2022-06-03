#ifndef MODULE_CPP_FRAGTRAP_H
#define MODULE_CPP_FRAGTRAP_H
#include "ClapTrap.hpp"
class FragTrap: virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& copy);
	FragTrap& operator=(const FragTrap& copy);
	~FragTrap();
	void highFivesGuys(void);
	static const int HP = 100;
	static const int EP = 100;
	static const int DMG = 30;
};
#endif
