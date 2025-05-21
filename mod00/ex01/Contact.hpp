#include <string>

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
		
		Contact(int id, std::string fName, std::string lName 
			std::string nName, std::string pNumber, 
			std::string dSecret;);
				
		void fieldFormated(std::string &field) const;
		void print() const;
};

