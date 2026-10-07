#include "./ClapTrap.hpp"

int main(void)
{
    ClapTrap trap("volt");
    trap.attack("hulk");
    trap.takeDamage(9);
    trap.beRepaired(3);
    trap.attack("hulk");
    return 0;
}