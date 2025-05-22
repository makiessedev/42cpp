#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
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
		void add(int *index);	
		void init();
		//
		// dont forget to remove
		//
		void seed();
};

#endif
