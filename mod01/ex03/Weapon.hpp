/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 13:10:33 by mmorais           #+#    #+#             */
/*   Updated: 2025/06/21 13:10:35 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_H
#define _WEAPON_H

#include <string>
#include <iostream>

class Weapon {
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string type);
	const std::string getType();
	void setType(std::string type);
};

#endif
