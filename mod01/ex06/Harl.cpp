/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 13:11:37 by mmorais           #+#    #+#             */
/*   Updated: 2025/06/21 13:11:38 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my.\n";
	std::cout << std::endl;
}

void Harl::info(void) {
	std::cout << "[ INFO ]\n";
	std::cout << "cannot believe adding extra bacon costs more money\n";
	std::cout << std::endl;
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]\n";
	std::cout << "his is unacceptable! ";
	std::cout << "I want to speak to the manager now.\n";
	std::cout << std::endl;
}

void Harl::complain(std::string level) {
	struct harl_t {
		std::string level;
		void (Harl::*func)();
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
