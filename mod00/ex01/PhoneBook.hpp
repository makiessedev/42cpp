#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include "Contact.hpp"

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
		//
		// dont forget to remove
		//
		void seed();
};

#endif
