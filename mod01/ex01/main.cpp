#include "Zombie.hpp"
#include "header.hpp"

int main(void) {
	std::string name = "alice";
	int N = 5;

	Zombie *z = zombieHorde(N, name);
	for (int i = 0; i < N; i++) {
		z[i].announce();		
	}
	delete[] z;
	return (0);
}
