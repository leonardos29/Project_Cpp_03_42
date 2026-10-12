#include "ScavTrap.hpp"
#include "FragTrap.hpp"

static void title(const std::string& s)
{
	std::cout << "\n===== " << s << " =====\n";
}

int main(void)
{
	title("1. Chain + abilities");
	{
		ClapTrap c("clap");
		ScavTrap s("scav");
		FragTrap f("frag");
		c.attack("dummy");
		s.attack("dummy");
		f.attack("dummy");
		s.guardGate();
		f.highFivesGuys();
	}

	title("2. Copy / assignment");
	{
		FragTrap a("alice");
		a.takeDamage(30);
		FragTrap b(a);
		FragTrap c;
		c = a;
		b.takeDamage(70);
		c.takeDamage(70);
	}

	title("3. Energy (100) and death");
	{
		FragTrap f("tired");
		for (int i = 0; i < 100; i++)
			f.attack("dummy");
		f.attack("dummy");
		f.takeDamage(1000);
		f.attack("dummy");
		f.beRepaired(1);
	}

	title("4. Repair overflow");
	{
		FragTrap f("repair");
		f.takeDamage(5);
		f.beRepaired(UINT_MAX);
		f.beRepaired(UINT_MAX - 95);
	}
	return 0;
}