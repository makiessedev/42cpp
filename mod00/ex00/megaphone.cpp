/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 01:20:40 by mmorais           #+#    #+#             */
/*   Updated: 2025/05/05 01:20:41 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char **av) {
	std::string arguments;
	std::string result;
	
	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	
	arguments = "";
	for (int i = 1; i < ac; i++) {
		arguments += av[i];
		if (i < (ac - 1)) {
			arguments += " ";
		}
	}

	result = arguments;
	for (size_t i = 0; i < arguments.length(); i++) {
		result[i] = std::toupper(arguments[i]);
	}

	std::cout << result << std::endl;

	return (0);
}
