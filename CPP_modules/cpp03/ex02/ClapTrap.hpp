#ifndef MODULE_CPP_CLAPTRAP_H
#define MODULE_CPP_CLAPTRAP_H
#include <iostream>
class ClapTrap
{
private:
	std::string _name;
	int _hitpoints;
	int _energy_points;
	int _attack_damage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& copy);
	ClapTrap& operator=(const ClapTrap& copy);
	~ClapTrap();
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	std::string get_name() const;
	int get_hitpoint() const;
	int get_energy_point() const;
	int get_damage() const;
	void set_name(std::string name);
	void set_hp(int hp);
	void set_ep(int ep);
	void set_ad(int ad);
};
#endif
