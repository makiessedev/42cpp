#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void add(PhoneBook *phoneBook, int *index) {
	std::string firstName;
    	std::string lastName;
    	std::string nickName;
    	std::string phoneNumber;
    	std::string darkestSecret;
	
        std::cout << "\nfirst name: ";
        std::getline(std::cin, firstName);
            
        std::cout << "last name: ";
        std::getline(std::cin, lastName);
            
        std::cout << "nick name: ";
        std::getline(std::cin, nickName);
            
        std::cout << "phone number: ";
        std::getline(std::cin, phoneNumber);
            
        std::cout << "darkest secret: ";
        std::getline(std::cin, darkestSecret);

        Contact contact(*index, firstName, lastName, nickName,
			    phoneNumber, darkestSecret);
        phoneBook->insert(contact);
            
	(*index)++;
        std::cout << "\n<Inserted>\n";
}

void search(PhoneBook *phoneBook) {
        std::string id_str;
        int index;
            
        phoneBook->printAll();
        std::cout << std::endl;
            
        std::cout << "INDEX: ";
        getline(std::cin, id_str);
            
	std::stringstream ss(id_str);
	ss >> index;

	phoneBook->printByIndex(index);
}

int main(void) {
    int index = 100;
    std::string input;
    PhoneBook phoneBook;

    
    while (true) {
        std::cout << "Wating for command: (ADD, SEARCH, EXIT)\n";
        std::cout << "---------------------------------------\n";

        std::cout << "command: ";

        getline(std::cin, input);

        if (input == "ADD") {
            add(&phoneBook, &index);

            std::system("clear");
            continue;
        }
        
        if (input == "SEARCH") {
		search(&phoneBook);
		continue;
        }
        
        if (input == "EXIT")
            return (0);

        if (input == "seed") {
            phoneBook.seed();
            continue;
        }

        std::system("clear");
    }

    return (0);
}
