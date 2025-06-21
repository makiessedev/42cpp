/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 13:09:56 by mmorais           #+#    #+#             */
/*   Updated: 2025/06/21 13:09:58 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_H
#define _HUMANA_H
#include "Weapon.hpp"

class HumanA {
private:
	std::string name;
	Weapon *weapon;
public:
	HumanA(std::string name, Weapon& weapon);
	void attack();
};
#endif
