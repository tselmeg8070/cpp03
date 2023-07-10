#include "FragTrap.hpp"

int main()
{
	FragTrap *frogTrap = new FragTrap("aaa");
	FragTrap strap("KillerBee");
	delete frogTrap;
	strap.takeDamage(1);
	strap.attack("Bloodhound");
	strap.highFivesGuys();
	strap.beRepaired(1);
}
