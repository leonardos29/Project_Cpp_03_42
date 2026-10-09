#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
: ClapTrap("ScavTrap")
{
    _hp = 100;
    _energy = 50;
    _a_damage = 20;
    std::cout << "Default constructor called for ScavTrap\n";
}

ScavTrap::ScavTrap(const std::string& name)
: ClapTrap(name)
{
    _hp = 100;
    _energy = 50;
    _a_damage = 20;
    std::cout << "constructor of ScavTrap called for " << _name << std::endl;
}
ScavTrap::ScavTrap(ScavTrap const &other)
:ClapTrap(other)
{   
    std::cout << "Copy constructor of ScavTrap called for " << _name << std::endl;
}
ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
    std::cout << "Copy assignment operator called for ScavTrap " << _name << std::endl;

    if(this != &other)
    {
        ClapTrap::operator=(other);
    }
    return(*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destructor of ScavTrap called for " << _name << std::endl;
}
void ScavTrap::attack(const std::string& target)
{
     if(_hp == 0 || _energy == 0)
    {
        if(_hp == 0)
            std::cout << "ScavTrap " << _name << " cannot attack " << target << " because it is dead.\n";
        else
            std::cout << "ScavTrap " << _name << " cannot attack " << target << " because it has no energy.\n";
        return;
    }

    _energy--;
    std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _a_damage << " points of damage!\n";
}
void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode\n";
}