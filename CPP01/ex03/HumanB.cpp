#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::HumanB(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

void	HumanB::setWeapon(Weapon &wep) {
	this->weapon = &wep;
}

void	HumanB::attack(void) {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}