#include <fstream>
#include <iostream>
#include <string>
#include <cstring>

std::string replace(std::string target, std::string replaced, std::string line) {
	std::string newLine;

	if (target == replaced)
		return line;
	
	/*pos = line.find(target);	

	if (pos == std::string::npos)
		return line;
	*/

	size_t i = 0;
	size_t j = 0;
	size_t t_len = target.length();
	size_t r_len = replaced.length();
	std::string new_line = "";
	while (line[i]) {
		j = 0;
		if (line.substr(i, t_len) == target) {
			/*while (line[i] == target[j]) {
				if ((target_len - 1) == j) {
					//new_line = line.substr(0, i - target_len + 1);
					new_line.append(replaced);	
					std::cout << new_line << std::endl;
					break ;
				}
				if (line[i+1] != target[j])
					break;
				i++;
				j++;
			}*/
			new_line.append(replaced);
			i += t_len;
		}
		std::string st = line.substr(i, 1);	
		new_line.append(st); 
		i++;
	}	

	std::cout << new_line << std::endl;
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
