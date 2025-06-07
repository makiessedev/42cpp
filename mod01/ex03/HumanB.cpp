#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name) {}

void HumanB::attack() {
	std::cout << this->name << " ";
	std::cout << "attacks with their ";
	std::cout << this->weapon->getType(); 
	std::cout << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}
