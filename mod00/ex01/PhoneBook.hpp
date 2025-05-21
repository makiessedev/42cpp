#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int len;
		int oldest_one;
	public:
		PhoneBook();

		Contact* getContacts();
		
		void insert(Contact &contact);
		void printAll();
		void printByIndex(int index) const;
		void seed();
};
