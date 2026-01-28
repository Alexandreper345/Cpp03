#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	unsigned int hitpoints;
	unsigned int energyPoints;
	unsigned int attackDamage;

public:

	std::string getName() const;
	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap& operator=(ClapTrap &other);
	virtual ~ClapTrap();
};
#endif