#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(/* args */);
	ScavTrap(const std::string &name);
	ScavTrap(ScavTrap &other);
	ScavTrap& operator=(ClapTrap &other);
	~ScavTrap();

	void attack(const std::string &target);
	void guardGate();
};

#endif