#include "ClapTrap.hpp"

int main()
{
	ClapTrap trap("Stinger");
	trap.takeDamage(1);
	trap.attack("Bloodhound");
	trap.beRepaired(1);
}
