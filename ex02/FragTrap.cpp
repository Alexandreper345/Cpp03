#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("DefaultFrag")
{
    hitpoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " created!" << std::endl;
}

FragTrap::FragTrap(const std::string &n) : ClapTrap(n)
{
    hitpoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " created!" << std::endl;
}

FragTrap::FragTrap(FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap " << name << " copy constructed!" << std::endl;
}

FragTrap& FragTrap::operator=(ClapTrap &other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    return *this;
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destroyed!" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    std::cout << "FragTrap " << name << " fiercely attacks " << target
              << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " requests a high five!" << std::endl;
}
