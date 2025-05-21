#include <string>
#include <iostream>
#include <iomanip>

class Contact {
	private:
		int index;
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		Contact();
		
		Contact(int index, std::string fName, std::string lName, 
			std::string nName, std::string pNumber, 
			std::string dSecret);
				
		int getIndex() const;
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNumber() const;
		std::string getDarkestScret() const;

		void fieldFormated(std::string &field) const;
		void print();

};

