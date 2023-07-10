#include "ScavTrap.hpp"

int main()
{
	ScavTrap strap("KillerBee");
	strap.takeDamage(1);
	strap.attack("Bloodhound");
	strap.beRepaired(1);
}
