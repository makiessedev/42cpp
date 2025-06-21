/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 13:10:26 by mmorais           #+#    #+#             */
/*   Updated: 2025/06/21 13:10:28 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(): type("") {}

Weapon::Weapon(std::string type): type(type) {}

const std::string Weapon::getType() {
	return this->type;
}

void Weapon::setType(std::string type) {
	this->type = type;
}
