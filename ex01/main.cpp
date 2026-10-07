#include "./ScavTrap.hpp"

int main(void)
{
    ScavTrap scav("bob");
    scav.attack("target");
    scav.takeDamage(30);
    scav.beRepaired(10);
    scav.guardGate();
    return 0;
}