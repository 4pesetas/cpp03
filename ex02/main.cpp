#include "ClapTrap.h"
#include "FragTrap.h"

int main()
{
	FragTrap frag1("Froggy");
    FragTrap frag2("Smoky");
    frag1.attack("Smoky");
    frag2.takeDamage(30);
    frag2.beRepaired(10);
    
    frag1.highFivesGuys();
    frag2.highFivesGuys();
	
	return 0;
}