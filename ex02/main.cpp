#include "FragTrap.hpp"

int main()
{
    std::cout << "--- Creating FragTrap ---" << std::endl;
    FragTrap frag("Frodo");

    std::cout << std::endl;
    frag.attack("an enemy");
    frag.beRepaired(10);
    frag.takeDamage(20);
    frag.highFivesGuys();

    std::cout << std::endl;
    std::cout << "--- Copying FragTrap ---" << std::endl;
    FragTrap fragCopy(frag);
    fragCopy.attack("a copied enemy");
    fragCopy.highFivesGuys();

    std::cout << std::endl;
    std::cout << "--- End of test ---" << std::endl;

    return 0;
}
