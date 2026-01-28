#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	a("Kamikaze");
	ClapTrap	b(a);
	ClapTrap	c;
	ClapTrap	e("Wimp");

	a.attack("Punk");
	a.takeDamage(3);
	a.beRepaired(1);

	std::cout << "=================" << std::endl;

	b.attack("Hobbo");
	b.takeDamage(5);
	b.beRepaired(2);
	
	std::cout << "=================" << std::endl;

	c = b;
	c.attack("Ghoul");
	c.takeDamage(1);
	c.beRepaired(2);
	
	std::cout << "=================" << std::endl;

	ClapTrap d(a);
	for (int i = 0; i < 10; i++) {
		d.attack("Wild dog");
	}
	d.takeDamage(7);
	d.beRepaired(0);

	std::cout << "=================" << std::endl;

	e.takeDamage(13);
	e.attack("Wild dog");
	e.beRepaired(2);

	return (0);
}