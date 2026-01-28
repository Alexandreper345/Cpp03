#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : name("Default"), hitpoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << name << " default constructed!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : name(name), hitpoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << this->name << " constructed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : name(other.name), hitpoints(other.hitpoints),
      energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
    std::cout << "ClapTrap " << name << " copy constructed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap &other){
	if (this != &other)
	{
		this->name = other.name;
		this->attackDamage = other.attackDamage;
		this->energyPoints = other.energyPoints;
		this->hitpoints = other.hitpoints;
	}
	std::cout << "ClapTrap " << name << " assigned!" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
}


std::string	ClapTrap::getName() const{
	return (this->name);
}

void	ClapTrap::attack(const std::string& target){
	if (hitpoints <= 0 || energyPoints <= 0){
		  std::cout << "ClapTrap " << name
                  << " can't attack (no hit points or energy points left)"
                  << std::endl;
        return;
	}
	energyPoints--;
	std::cout << "ClapTrap " << name << " attacks " << target
              << ", causing " << attackDamage 
			  << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (hitpoints <= amount)
		this->hitpoints = 0;
	else
		this->hitpoints -= amount;
	std::cout << "ClapTrap " << this->name << " took " << amount << " damage!" 
		<< " Now it has " << this->hitpoints << " hit points left!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (hitpoints <= 0 || energyPoints <= 0){
		std::cout << "ClapTrap " << name
                  << " can't repair (no hit points or energy points left)"
                  << std::endl;
        return;
	}
	energyPoints--;
	hitpoints += amount;
	    std::cout << "ClapTrap " << name
              << " repairs itself for " << amount
              << " hit points!" << std::endl;
}
