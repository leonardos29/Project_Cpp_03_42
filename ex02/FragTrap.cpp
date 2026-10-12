#include "./FragTrap.hpp"

FragTrap::FragTrap(void)
: ClapTrap("FragTrap")
{
    _hp = 100;
    _energy = 100;
    _a_damage = 30;
    std::cout << "Default constructor called for FragTrap\n";
}

FragTrap::FragTrap(const std::string& name)
: ClapTrap(name)
{
    _hp = 100;
    _energy = 100;
    _a_damage = 30;
    std::cout << "constructor of FragTrap called for " << _name << std::endl;
}
FragTrap::FragTrap(FragTrap const &other)
:ClapTrap(other)
{   
    std::cout << "Copy constructor of FragTrap called for " << _name << std::endl;
}
FragTrap &FragTrap::operator=(FragTrap const &other)
{
    std::cout << "Copy assignment operator called for FragTrap " << _name << std::endl;

    if(this != &other)
    {
        ClapTrap::operator=(other);
    }
    return(*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " positive high-fives request\n";
}    

FragTrap::~FragTrap(void)
{
    std::cout << "Destructor of FragTrap called for " << _name << std::endl;
}

