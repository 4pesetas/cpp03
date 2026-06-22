#include "ClapTrap.h"

int main()
{
	ClapTrap obj1("Clappy");
	obj1.attack("Jack");
	obj1.takeDamage(5);
	obj1.beRepaired(2);
	obj1.takeDamage(2);
	obj1.beRepaired(5);
	ClapTrap obj2("Alfa");
	obj2.attack("Clappy");
	obj2.takeDamage(5);
	obj2.beRepaired(2);
	obj2.takeDamage(2);
	obj2 = obj1;
	obj2.attack("Alfa");
	obj2.attack("Alfa");
	obj2.attack("Alfa");
	obj2.attack("Alfa");
	obj2.attack("Alfa");
	obj2.attack("Alfa");
	obj2.attack("Alfa");
	obj2.attack("Alfa");
	obj2.takeDamage(3);
	obj2.takeDamage(4);
	obj2.takeDamage(4);
	obj2.beRepaired(11);
	
	return 0;
}