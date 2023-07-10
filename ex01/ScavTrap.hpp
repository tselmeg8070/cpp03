#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap(const std::string &name);
	ScavTrap(ScavTrap &t);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& t);
	void	attack(const std::string &target);
	void	guardGate();
};

#endif
