/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 13:08:37 by mmorais           #+#    #+#             */
/*   Updated: 2025/06/21 13:08:39 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>

#ifndef _ZOMBIE_H
# define _ZOMBIE_H
class Zombie {
private:
	std::string name;
public:
	Zombie();
	Zombie(std::string name); 
	~Zombie();

	void setName(std::string name);
	void announce(void);
};
#endif
