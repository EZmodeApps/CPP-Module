#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

int	main()
{
	ClapTrap clap("Clap_test");
	ScavTrap scav("Scav_test");
	FragTrap frag("Frag_test");
    
	clap.attack("Clap_target");
	clap.beRepaired(10);
	scav.attack("Scav_target");
	scav.guardGate();
	frag.takeDamage(20);
	frag.beRepaired(10);
	frag.attack("Frag_target");
	frag.highFivesGuys();
	return (0);
}
