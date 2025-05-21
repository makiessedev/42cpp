#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

/*class PhoneBook {
    public:
	Contact contacts[8];
        int len;
        int oldest_one;

        PhoneBook(): len(0), oldest_one(0) {};

        void insert(Contact& contact) {
            if (len < 8){
                contacts[len] = contact;
                len++;
            } else {
                contacts[oldest_one] = contact;
                oldest_one++;
                if (oldest_one == 8)
                    oldest_one = 0;
            }
        }

        void printAll() {
            int columnWide = 10;

            if (len == 0) {
                std::cout << "<Empty List>\n";
                return;
            }

            std::cout << std::right << std::setw(columnWide) << "INDEX" << "|"; 
            std::cout << std::right << std::setw(columnWide) << "F.NAME" << "|"; 
            std::cout << std::right << std::setw(columnWide) << "L.NAME" << "|"; 
            std::cout << std::right << std::setw(columnWide) << "N.NAME" << "|"; 

	    std::cout << std::endl;

            for (int i = 0; i < len; i++) {
                contacts[i].print();
	    	std::cout << std::endl;
            }
        }

        void printById(int id) {
            for (int i = 0; i < len; i++) {
                if (contacts[i].getIndex() == id) {
                    std::cout << contacts[i].getIndex() << std::endl;
                    std::cout << contacts[i].getFirstName() << std::endl;
                    std::cout << contacts[i].getLastName() << std::endl;
                    std::cout << contacts[i].getNickName() << std::endl;

                    return;
                }
            }
            std::cout << "Index '" << id << "' not found!\n";
        }

        void seed() {
            for (int i = 0; i < 8; i++){
                Contact contact(i, "Makiesse", "Morais", "Meick", "000", "d");
                contacts[i] = contact;
            }
            len = 8;
        }
};*/

int main(void) {
    int index = 1212;
    std::string input;
    PhoneBook phoneBook;

    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

    while (true) {
        std::cout << "Wating for command: (ADD, SEARCH, EXIT)\n";
        std::cout << "---------------------------------------\n";

        std::cout << "command: ";

        getline(std::cin, input);

        if (input == "ADD") {
            index++;
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

            Contact contact(index, firstName, lastName, nickName, phoneNumber, darkestSecret);
            phoneBook.insert(contact);
            
            std::cout << "\n<Inserted>\n";

            std::system("clear");
            continue;
        }
        
        if (input == "SEARCH") {
            std::string id_str;
            int index;
            
            phoneBook.printAll();
            std::cout << std::endl;
            
            std::cout << "INDEX: ";
            getline(std::cin, id_str);
            
            std::stringstream ss(id_str);
            ss >> index;

            phoneBook.printById(index);

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
