#include "ClapTrap.h"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default constructor called for " <<  _name << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Parameterized constructor called for " <<  _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap Copy constructor called for " <<  _name << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap Copy assignment operator called for " <<  _name << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for " << _name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0 || _energyPoints <= 0)
	{
		std::cout << _name << " Can't attack. Out of energy or points" << std::endl;
		return;
	}
	else
	{
		_energyPoints--;
		std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage! // " << _energyPoints << " energy level." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		_energyPoints--;
		_hitPoints = _hitPoints + amount;
		std::cout << _name << " repaired! + " << amount << " Now has " << _hitPoints << " points // " << _energyPoints << " energy level." << std::endl;
	}
	else
	{
		std::cout << _name << " Can not repair. Out of energy or points or dead" << std::endl;
		return;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= _hitPoints)
	{
		_hitPoints = 0;
		std::cout << _name << " Died" << std::endl;
	}
	else
	{
		_hitPoints = _hitPoints - amount;
		std::cout << _name << " took " << amount << " points of damage" << std::endl;
	}
}