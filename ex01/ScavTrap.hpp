#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(const std::string& name);
        ScavTrap(ScavTrap const &other);
        ScavTrap& operator=(ScavTrap const &other);
        ~ScavTrap(void);
        void attack(const std::string& target);
        void guardGate(void);  
};

#endif