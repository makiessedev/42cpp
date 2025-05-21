#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contants[8];
		int len;
		int oldest_one;
	public:
		PhoneBook();

		Contact* getContacts() const;
		
		void insert(Contact &contact);
		void printAll() const;
		void printByIndex(int index) const;
		void seed();
};
