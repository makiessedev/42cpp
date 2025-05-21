#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): len(0), oldest_one(0) {};

Contact* PhoneBook::getContacts() {
	return (this->contacts);
}

void PhoneBook::insert(Contact& contact) {
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

void PhoneBook::printAll() {
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

void PhoneBook::printById(int id) {
	for (int i = 0; i < len; i++) {
		if (contacts[i].getIndex() == id) {
			std::cout << contacts[i].getIndex() << std::endl;
			std::cout << contacts[i].getFirstName() << std::endl;
			std::cout << contacts[i].getLastName() << std::endl;
			std::cout << contacts[i].getNickName() << std::endl;

                    	return;                }
       	}
        std::cout << "Index '" << id << "' not found!\n";
}

void PhoneBook::seed() {
	for (int i = 0; i < 8; i++){
		Contact contact(i, "Makiesse", "Morais", "Meick", "000", "d");
                contacts[i] = contact;
        }
        len = 8;
}
