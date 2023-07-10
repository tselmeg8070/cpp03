#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap: "<< name << " constructing" << std::endl;
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}


FragTrap::FragTrap(FragTrap &t) : ClapTrap(t.getName())
{
	std::cout << "FragTrap: Copy constructor called" << std::endl;
	setHitPoints(t.getHitPoints());
	setEnergyPoints(t.getEnergyPoints());
	setAttackDamage(t.getAttackDamage());
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: " << getName() << " is destroyed" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& t)
{
	std::cout << "FragTrap: Copy assignment operator called" << std::endl;
	setName(t.getName());
	setHitPoints(t.getHitPoints());
	setEnergyPoints(t.getEnergyPoints());
	setAttackDamage(t.getAttackDamage());
	return (*this);
}

void	FragTrap::attack(const std::string &target)
{
	std::cout << "FragTrap: " << getName() << " attacks " << target
		<< ", causing " << getAttackDamage() << " points of damage!"
		<< std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap: " << getName() << " high five gusy!!" << std::endl;
}
