#include "Zombie.hpp"

Zombie::Zombie(): name("") {}

Zombie::Zombie(std::string name): name(name) {}

Zombie::~Zombie() {
	std::cout << "Destructor " << this->name << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string name) {
	this->name = name;
}
