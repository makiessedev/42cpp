/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 13:08:45 by mmorais           #+#    #+#             */
/*   Updated: 2025/06/21 13:08:47 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie *zombie = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zombie[i].setName(name); 
	}
	return zombie;
}
