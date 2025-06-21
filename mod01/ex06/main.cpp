/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 13:11:47 by mmorais           #+#    #+#             */
/*   Updated: 2025/06/21 13:11:48 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int get_id(std::string level) {
	if (level == "DEBUG")	
		return (0);
	if (level == "INFO")
		return (1);
	if (level == "WARNING")
		return (2);
	if (level == "ERROR")
		return (3);
	return (-1);
}

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Error: ./harlFilter <arg>\n";
		return (1);
	}

	Harl harl;
	switch(get_id(av[1])) {
		case 0:	
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about ";
			std::cout << "insignificant problems ]\n";
	};

	return (0);
}
