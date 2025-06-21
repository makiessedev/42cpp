/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 13:08:15 by mmorais           #+#    #+#             */
/*   Updated: 2025/06/21 13:08:16 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
