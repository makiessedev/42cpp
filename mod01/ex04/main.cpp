/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 13:10:42 by mmorais           #+#    #+#             */
/*   Updated: 2025/06/21 13:10:53 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <cstring>

std::string replace(std::string target, std::string replaced, std::string line) {
	int i;
	int tar_len;
	std::string new_line;

	if (target == replaced)
		return line;
	
	i = 0;
	tar_len = target.length();
	new_line = "";
	while (line[i]) {
		if (line.substr(i, tar_len) == target) {
			new_line.append(replaced);
			i += tar_len;
		}
		new_line.append(line.substr(i, 1)); 
		i++;
	}	

	return new_line;
}

int main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "./program filename str1 str2" << std::endl;
		return (1);
	}

	std::string temp = std::string(av[1]).append(".replace");
	char *filename = new char [temp.length() + 1];
	std::strcpy(filename, temp.c_str());

	std::ofstream file_replace(filename);
	std::ifstream file(av[1]);
	std::string str1 = av[2];
	std::string str2 = av[3];

	std::string line;

	if (!file.is_open()) {
		std::cout << "cannot open file\n";
		return (1);
	}	
	
	while (getline(file, line)) {
		std::string newLine = replace(str1, str2, line);
		file_replace << newLine << std::endl;
	}

	file.close();
	return (0);
} 
