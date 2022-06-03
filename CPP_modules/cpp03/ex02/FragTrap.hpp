#ifndef MODULE_CPP_FRAGTRAP_H
#define MODULE_CPP_FRAGTRAP_H
#include "ClapTrap.hpp"
class FragTrap: public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& copy);
	FragTrap& operator=(const FragTrap& copy);
	~FragTrap();
	void highFivesGuys(void);
};
#endif
