#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include "Contact.hpp"

enum Command {CMD_ADD, CMD_SEARCH, CMD_EXIT, CMD_INVALID};

class PhoneBook {
	private:
		Contact contacts[8];
		int len;
		int oldest_one;
		int index;
	public:
		PhoneBook();

		Contact* getContacts();
		
		void insert(Contact &contact);
		void printAll();
		void printByIndex(int index) const;
		void add();	
		void init();
		void search();
		Command getCommand(std::string& input); 
		bool isValidNumber(std::string &number);
		bool isValidStringField(std::string &string);
		bool getAndValidateInput(std::string &field);
};

#endif
