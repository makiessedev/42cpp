#include <string>
#include <iostream>
#include <iomanip>

class Contact {
    public:
        int id;
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;

        Contact() {
            this->id = 0;
            this->firstName = "";
            this->lastName = "";
            this->nickName = "";
            this->phoneNumber = "";
            this->darkestSecret = "";
        }

        Contact(int id, std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret) {
            this->id = id;
            this->firstName = firstName;
            this->lastName = lastName;
            this->nickName = nickName;
            this->phoneNumber = phoneNumber;
            this->darkestSecret = darkestSecret;
        }

        std::string fieldFormated(std::string &field) {
            if (field.length() < 10)
                return (field);
            
            return (field.substr(0, 9).append("."));
        }

        void print() {
            int columnWide = 10;
            int columnsNumber = 4;
            int pipesNumber = 6;
            
            //for (int i = 0; i < (columnWide * columnsNumber) + pipesNumber; i++)
            //    std::cout << "-";
            std::cout << std::endl;

            //

            std::cout << std::right << std::setw(columnWide) << this->id << "|"; 
            std::cout << std::right << std::setw(columnWide) << fieldFormated(this->firstName) << "|"; 
            std::cout << std::right << std::setw(columnWide) << fieldFormated(this->lastName) << "|"; 
            std::cout << std::right << std::setw(columnWide) << fieldFormated(this->nickName) << "|"; 
            std::cout << std::right << std::setw(columnWide) << fieldFormated(this->phoneNumber) << "|"; 
            std::cout << std::right << std::setw(columnWide) << fieldFormated(this->darkestSecret) << "|";
        }
};

class PhoneBook {
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
            for (int i = 0; i < len; i++) {
                contacts[i].print();
            }
        }

        void printById(int id) {
            for (int i = 0; i < len; i++) {
                if (contacts[i].id == id) {
                    std::cout << contacts[i].id << std::endl;
                    std::cout << contacts[i].firstName << std::endl;
                    std::cout << contacts[i].lastName << std::endl;
                    std::cout << contacts[i].nickName << std::endl;
                    std::cout << contacts[i].phoneNumber << std::endl;
                    std::cout << contacts[i].darkestSecret << std::endl;

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
            oldest_one = 6;
        }
};

int main(void) {
    int id = 1212;
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
            id++;
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

            Contact contact(id, firstName, lastName, nickName, phoneNumber, darkestSecret);
            phoneBook.insert(contact);
            
            std::cout << "\n<Inserted>\n";

            std::system("clear");
            continue;
        }
        
        if (input == "SEARCH") {
            std::string index = NULL;
            
            phoneBook.printAll();
            std::cout << std::endl;

            std::cout << "INDEX: ";
            getline(std::cin, index);
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