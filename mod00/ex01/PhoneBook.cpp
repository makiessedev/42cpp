#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): len(0), oldest_one(0), index(100) {};

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

void PhoneBook::printByIndex(int index) const {
	for (int i = 0; i < len; i++) {
		if (contacts[i].getIndex() == index) {
			std::cout << contacts[i].getIndex() << std::endl;
			std::cout << contacts[i].getFirstName() << std::endl;
			std::cout << contacts[i].getLastName() << std::endl;
			std::cout << contacts[i].getNickName() << std::endl;

                    	return;                }
       	}
        std::cout << "Index '" << index << "' not found!\n";
}

void PhoneBook::seed() {
	for (int i = 0; i < 8; i++){
		Contact contact(i, "Makiesse", "Morais", "Meick", "000", "d");
                contacts[i] = contact;
        }
        len = 8;
}

void PhoneBook::add() {
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

        Contact contact(this->index, firstName, lastName, nickName,
			    phoneNumber, darkestSecret);
        this->insert(contact);
            
	this->index++;
        std::cout << "\n<Inserted>\n";
}

void PhoneBook::search() {
        std::string id_str;
        int index;
            
        this->printAll();
        std::cout << std::endl;
            
        std::cout << "INDEX: ";
        getline(std::cin, id_str);
            
	std::stringstream ss(id_str);
	ss >> index;

	this->printByIndex(index);
}


Command PhoneBook::getCommand(std::string& input) {
	if (input == "ADD")
		return (CMD_ADD);
	if (input == "SEARCH")
		return (CMD_SEARCH);	
	if (input == "EXIT")
		return (CMD_EXIT);
	if (input == "seed")
		return (CMD_SEED);
	return (CMD_INVALID);
}

void PhoneBook::init() {
	std::string input;
    
	while (true) {
        	std::cout << "Wating for command: (ADD, SEARCH, EXIT)\n";
        	std::cout << "---------------------------------------\n";

        	std::cout << "command: ";

        	getline(std::cin, input);

		switch (getCommand(input)) {
        		case CMD_ADD:
            			this->add();
				std::system("clear");
            			break;
        		case CMD_SEARCH:
				this->search();
				break;
			case CMD_EXIT:
            			return ;
        		case CMD_SEED:
            			this->seed();
            			break;
			case CMD_INVALID:
			default:
				break;
       		}
    	}
}

