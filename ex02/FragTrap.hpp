#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap(const std::string &name);
	FragTrap(FragTrap &t);
	~FragTrap();
	FragTrap& operator=(const FragTrap& t);
	void	attack(const std::string &target);
	void	highFivesGuys(void);
};

#endif
