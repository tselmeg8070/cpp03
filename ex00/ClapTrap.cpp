#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Claptrap: Constructor called" << std::endl;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap &t)
{
	std::cout << "Claptrap: Copy constructor called" << std::endl;
	this->name = t.getName();
	this->hitPoints = t.getHitPoints();
	this->energyPoints = t.getEnergyPoints();
	this->attackDamage = t.getAttackDamage();
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap: " << name << " is destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& t)
{
	std::cout << "Claptrap: Copy assignment operator called" << std::endl;
	this->name = t.getName();
	this->hitPoints = t.getHitPoints();
	this->energyPoints = t.getEnergyPoints();
	this->attackDamage = t.getAttackDamage();
	return (*this);
}

std::string	ClapTrap::getName() const
{
	return (name);
}

unsigned int	ClapTrap::getHitPoints() const
{
	return (hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints() const
{
	return (energyPoints);
}

unsigned int	ClapTrap::getAttackDamage() const
{
	return (attackDamage);
}

void	ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap: " << name << " attacks " << target
		<< ", causing " << attackDamage << " points of damage!"
		<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (energyPoints > 0)
	{
		energyPoints--;
		hitPoints -= amount;
		std::cout << "ClapTrap: " << name << " got attacked, left with " << hitPoints
			<< "hp, left with " << energyPoints << " points of energy!"
			<< std::endl;
	}
	else
		std::cout << "ClapTrap: " << name << " out of energy" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints > 0)
	{
		energyPoints--;
		hitPoints += amount;
		std::cout << "ClapTrap: " << name << " repaired " << amount
			<< "hp, left with " << energyPoints << " points of energy!"
			<< std::endl;
	}
	else
		std::cout << "ClapTrap: " << name << " out of energy" << std::endl;
}
