#include <string>
#include <iostream>

int main(void) {
	std::string var = "HI THIS IS BRAIN";
	std::string* stringPTR = &var;
	std::string& stringREF = var;

	std::cout << "The memory address of the string variable: ";
	std::cout << &var << std::endl;

	std::cout << "The memory address held by stringPTR: ";
	std::cout << stringPTR << std::endl;

	std::cout << "The memory address held by stringREF: ";
	std::cout << &stringREF << std::endl;

	std::cout << "The value of the string variable: ";
	std::cout << var << std::endl;

	std::cout << "The value pointed to by stringPTR: ";
	std::cout << *stringPTR << std::endl;

	std::cout << "The value pointed to by stringREF: ";
	std::cout << stringREF << std::endl;
	
	return (0);
}

