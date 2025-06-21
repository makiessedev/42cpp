/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 13:09:50 by mmorais           #+#    #+#             */
/*   Updated: 2025/06/21 13:09:52 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):
	name(name), weapon(&weapon) {}

void HumanA::attack() {
	std::cout << this->name << " ";
	std::cout << "attacks with their ";
	std::cout << this->weapon->getType(); 
	std::cout << std::endl;
}
