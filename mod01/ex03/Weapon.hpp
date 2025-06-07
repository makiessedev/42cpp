#ifndef _WEAPON_H
#define _WEAPON_H

#include <string>
#include <iostream>

class Weapon {
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string type);
	const std::string getType();
	void setType(std::string type);
};

#endif
