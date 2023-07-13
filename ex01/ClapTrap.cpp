#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Claptrap: " <<  name << " constructor called" << std::endl;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(const std::string &name)
{
	std::cout << "Claptrap: " <<  name << " constructor called" << std::endl;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap &t)
{
	std::cout << "Claptrap: " <<  name << " copy constructor called" << std::endl;
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
	std::cout << "Claptrap: " <<  name << " Copy assignment operator called" << std::endl;
	this->name = t.getName();
	this->hitPoints = t.getHitPoints();
	this->energyPoints = t.getEnergyPoints();
	this->attackDamage = t.getAttackDamage();
	return (*this);
}

const std::string	&ClapTrap::getName() const
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

void	ClapTrap::setName(const std::string &name)
{
	this->name = name;
}

void	ClapTrap::setHitPoints(unsigned int amount)
{
	hitPoints = amount;
}

void	ClapTrap::setEnergyPoints(unsigned int amount)
{
	energyPoints = amount;
}

void	ClapTrap::setAttackDamage(unsigned int amount)
{
	attackDamage = amount;
}

void	ClapTrap::attack(const std::string &target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints--;
		std::cout << "ClapTrap: " << name << " attacks " << target
			<< ", causing " << attackDamage << " points of damage!"
			<< std::endl;
	}
	else
		std::cout << "ClapTrap: " << name << " out of energy or hp" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > 0)
	{
		hitPoints -= amount;
		std::cout << "ClapTrap: " << name << " got attacked, left with " << hitPoints
			<< "hp, left with " << energyPoints << " points of energy!"
			<< std::endl;
	}
	else
		std::cout << "ClapTrap: " << name << " i'm already dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints--;
		hitPoints += amount;
		std::cout << "ClapTrap: " << name << " repaired " << amount
			<< "hp, left with " << energyPoints << " points of energy!"
			<< std::endl;
	}
	else
		std::cout << "ClapTrap: " << name << " out of energy or hp" << std::endl;
}
