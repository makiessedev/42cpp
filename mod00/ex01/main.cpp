#include <string>
#include <iostream>

class Contact {
    public:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;

        Contact() {
            this->firstName = "";
            this->lastName = "";
            this->nickName = "";
            this->phoneNumber = "";
            this->darkestSecret = "";
        }

        Contact(std::string &firstName, std::string &lastName, std::string &nickName, std::string &phoneNumber, std::string &darkestSecret) {
            this->firstName = firstName;
            this->lastName = lastName;
            this->nickName = nickName;
            this->phoneNumber = phoneNumber;
            this->darkestSecret = darkestSecret;
        }

        void print() {
            std::cout << "---------------------------------------\n";

            std::cout << this->firstName << std::endl; 
            std::cout << this->lastName << std::endl; 
            std::cout << this->nickName << std::endl; 
            std::cout << this->phoneNumber << std::endl; 
            std::cout << this->darkestSecret << std::endl;
        }
};

class PhoneBook {
    public:
        Contact contacts[8];
        int len;

        PhoneBook(): len(0) {};

        void insert(Contact& contact) {
            contacts[len] = contact;
            if (len != 7) 
                len++;
        }

        void printAll() {
            if (len == 0) {
                std::cout << "<Empty List>\n";
                return;
            }
            for (int i = 0; i < len; i++) {
                contacts[i].print();
            }
        }
};

int main(void) {
    std::string input;
    PhoneBook phoneBook;

    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

    std::cout << "Wating for command: (ADD, SEARCH, EXIT)\n";
    std::cout << "---------------------------------------\n";
    while (true) {
        std::cout << "command: ";

        std::cin >> input;

        if (input == "ADD") {
            std::cout << "\nfirst name: ";
            std::cin >> firstName;
            if (firstName.empty()) {
                std::cout << "Invalid value";
                continue ;
            }
            
            std::cout << "last name: ";
            std::cin >> lastName;
            if (lastName.empty()) {
                std::cout << "Invalid value";
                continue ;
            }
            
            std::cout << "nick name: ";
            std::cin >> nickName;
            if (nickName.empty()) {
                std::cout << "Invalid value";
                continue ;
            }
            
            std::cout << "phone number: ";
            std::cin >> phoneNumber;
            if (phoneNumber.empty()) {
                std::cout << "Invalid value";
                continue ;
            }
            
            std::cout << "darkest secret: ";
            std::cin >> darkestSecret;
            if (darkestSecret.empty()) {
                std::cout << "Invalid value";
                continue ;
            }

            Contact contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
            phoneBook.insert(contact);
            
            std::cout << "\n<Inserted>\n";

            continue;
        }
        
        if (input == "SEARCH") {
            phoneBook.printAll();
            std::cout << std::endl;
            continue;
        }
        
        if (input == "EXIT")
            return (0);
    }

    return (0);
}