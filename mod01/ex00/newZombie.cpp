#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name) {
	Zombie *z = malloc(sizeof(Zombie));
	z->setName(name);
	return (z);
}
