#include <string>
#include <iostream>
#include <cstdlib>

class Zombie {
private:
	std::string name;
public:
	Zombie();
	Zombie(std::string &name); 

	void setName(std::string name);
	void announce(void);
	Zombie* newZombie(std::string name);
};
