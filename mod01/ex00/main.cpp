/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 13:06:20 by mmorais           #+#    #+#             */
/*   Updated: 2025/06/21 13:06:22 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "header.hpp"

int main(void) {
	std::string name1 = "alice";
	std::string name2 = "joe";
	std::string name3 = "doe";

	Zombie zombie1(name1);
	randomChump(name2);
	Zombie *zombie = newZombie(name3);
	delete zombie;
	return (0);
}
