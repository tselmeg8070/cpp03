#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap: "<< name << " constructing" << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}


ScavTrap::ScavTrap(ScavTrap &t) : ClapTrap(t.getName())
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
	setHitPoints(t.getHitPoints());
	setEnergyPoints(t.getEnergyPoints());
	setAttackDamage(t.getAttackDamage());
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: " << getName() << " is destroyed" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& t)
{
	std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
	setName(t.getName());
	setHitPoints(t.getHitPoints());
	setEnergyPoints(t.getEnergyPoints());
	setAttackDamage(t.getAttackDamage());
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap: " << getName() << " attacks " << target
		<< ", causing " << getAttackDamage() << " points of damage!"
		<< std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap: " << getName() << " in gate keeper mode" << std::endl;
}
