/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 13:11:01 by mmorais           #+#    #+#             */
/*   Updated: 2025/06/21 13:11:02 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
