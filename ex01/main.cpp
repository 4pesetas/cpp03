#include "ClapTrap.h"
#include "ScavTrap.h"

int main()
{
	
	ScavTrap scav1("Yuzu");
	ScavTrap scav2("Kulfi");
	scav1.attack("Kulfi");
	ClapTrap clap1("Coco");
	scav1 = scav2;
	clap1 = scav2; // The compiler simply copies the ClapTrap portion of scav1 into clap1 and ignores the ScavTrap-specific parts. This is known as object slicing.
	//scav1 = clap1; // Cannot assign a base object to a derived object.
	scav1.guardGate();
	//scav2.guardGate();
	clap1.attack("Coco");
	//scav2.takeDamage(3);
	//scav2.beRepaired(11);
	
	return 0;
}