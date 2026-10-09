#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
:  _name("ClapTrap"),
   _hp(10),
   _energy(10),
   _a_damage(0)
{
    std::cout << "Default constructor called for ClapTrap\n";
}

ClapTrap::ClapTrap(const std::string& name)
:  _name(name),
   _hp(10),
   _energy(10),
   _a_damage(0)
{
    std::cout << "constructor called for " << name << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const &other)
:  _name(other._name),
   _hp(other._hp),
   _energy(other._energy),
   _a_damage(other._a_damage)
{   
    std::cout << "Copy constructor called for " << _name << std::endl;
}
ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
    std::cout << "Copy assignment operator called for " << _name << std::endl;

    if(this != &other)
    {
        _name = other._name;
        _hp = other._hp;
        _energy = other._energy;
        _a_damage = other._a_damage;
    }
    return(*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called for " << _name << std::endl;
}
void ClapTrap::attack(const std::string& target)
{
    if(_hp == 0 || _energy == 0)
    {
        if(_hp == 0)
            std::cout << "ClapTrap " << _name << " cannot attack " << target << " because it is dead.\n";
        else
            std::cout << "ClapTrap " << _name << " cannot attack " << target << " because it has no energy.\n";
        return;
    }

    _energy--;
    std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _a_damage << " points of damage!\n";
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hp == 0)
    {
        std::cout << "ClapTrap " << _name << " is already dead\n";
        return;
    }
    if (amount >= _hp)
    {
        _hp = 0;
        std::cout << "ClapTrap " << _name << " takes " << amount << " of damage and died\n";
        return;
    }
    _hp -= amount;
    std::cout << "ClapTrap " << _name << " takes " << amount << " of damage\n";
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(_hp == 0 || _energy == 0)
    {
        if(_hp == 0)
            std::cout << "ClapTrap " << _name << " cannot repair itself because it is dead.\n";
        else
           std::cout << "ClapTrap " << _name << " cannot repair itself because it has no energy.\n";
        return;
    }
    if(UINT_MAX - _hp < amount)
    {
        std::cout << "ClapTrap " << _name << " cannot repair itself, the amount is too large\n";       
        return;
    }
    _energy--;
    _hp += amount;
     std::cout << "ClapTrap " << _name << " repairs itself for " << amount << "\n";
}