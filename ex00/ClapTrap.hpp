#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP
# include <iostream>
# include <string>

class ClapTrap {
private:
	std::string		name;
	unsigned int	hitPoints;
	unsigned int	energyPoints;
	unsigned int	attackDamage;
public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(ClapTrap &t);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap& t);
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	const std::string	&getName() const;
	unsigned int		getHitPoints() const;
	unsigned int		getEnergyPoints() const;
	unsigned int		getAttackDamage() const;
};

#endif
