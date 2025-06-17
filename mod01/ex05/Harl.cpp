#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << "DEBUG\n";
}

void Harl::info(void) {
	std::cout << "INFO\n";
}

void Harl::warning(void) {
	std::cout << "WARNING\n";
}

void Harl::error(void) {
	std::cout << "ERROR\n";
}

void Harl::complain(std::string level) {
	typedef void (Harl::*funcPtr)();

	struct harl_t {
		std::string level;
		funcPtr void (Harl::*funcPtr)();
	}; 

	static const harl_t harl[] = {
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error}
	};	

	static const int harl_len = sizeof(harl) / sizeof(harl[0]);

	for (int i = 0; i < harl_len; i++) {
		if (harl[i].level == level) {
			(this->*(harl[i].func))();
			return ;
		}
	}
}
