#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
    // Teste ClapTrap
    std::cout << "--- Criando ClapTrap ---" << std::endl;
    ClapTrap ct("Clappy");
    ct.attack("inimigo");     // versão ClapTrap
    ct.takeDamage(10);
    ct.beRepaired(5);

    std::cout << std::endl;

    // Teste ScavTrap
    std::cout << "--- Criando ScavTrap ---" << std::endl;
    ScavTrap st("Scavy");
    st.attack("inimigo");     // versão ScavTrap: deve imprimir "ScavTrap Scavy ferozmente ataca inimigo..."
    st.takeDamage(15);
    st.beRepaired(10);
    st.guardGate();           // função especial do ScavTrap

    std::cout << std::endl;

    // Testando cópia
    std::cout << "--- Copiando ScavTrap ---" << std::endl;
    ScavTrap stCopy = st;
    stCopy.attack("inimigo copiado");
    stCopy.guardGate();

    std::cout << "--- Fim do teste ---" << std::endl;
    return 0;
}
