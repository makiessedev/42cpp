#include <fstream>
#include <iostream>
#include <string>
#include <cstring>

std::string replace(std::string target, std::string replaced, std::string line) {
	std::string newLine;
	std::size_t pos;

	if (target == replaced)
		return line;
	
	pos = line.find(target);	

	if (pos == std::string::npos)
		return line;

	int start = 0;
	int i = 0;
	while (pos != std::string::npos) {
		i += pos;
		newLine = line.substr(start, pos - 1);
		newLine
			.append(replaced)
			.append(line.substr(pos + target.length()));
		line = newLine;
		pos = line.find(target, i + 1);
		std::cout << "here\n";
	}	
	return newLine;
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
