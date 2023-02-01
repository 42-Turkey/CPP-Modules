#include <ClapTrap.hpp>

int main( void )
{
    ClapTrap    a("Franz Kafka");

	a.attack("Metroid");
	a.takeDamage(9);
	std::cout << a << std::endl;
	a.beRepaired(10);

	a.takeDamage(10);
	std::cout << a << std::endl;
	a.attack("Metroid");

	return (0);
}
