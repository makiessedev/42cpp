#include <iostream>

class PhoneBook {
	private:
		Contact::Contact contants[8];
		int len;
		int oldest_one;
	public:
		void insert(Contact &contact);
		void printAll() const;
		void printByIndex(index) const;
		void seed();
};
