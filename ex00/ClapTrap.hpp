#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    public:
        ClapTrap(const std::string& name);
        ClapTrap(ClapTrap const &other);
        ClapTrap& operator=(ClapTrap const &other);
        ~ClapTrap(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    private:
        std::string     _name;
        unsigned int    _hp;
        unsigned int    _energy;
        unsigned int    _a_damage;
};

#endif