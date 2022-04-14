#include "ClapTrap.h"

int main() {
	ClapTrap test("Test");
    
	test.attack("Target");
	test.takeDamage(3);
	test.beRepaired(2);
	test.beRepaired(1);
	return 0;
}
