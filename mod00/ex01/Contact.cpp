#include "Contact.hpp"

Contact::Contact(): 
	index(0), firstName(""), lastName(""), nickName(""), 
	phoneNumber(""), darkestSecret("")
{}

Contact::Contact(
	int index, std::string fName, std::string lName, std::string nName, 
	std::string pNumber, std::string dSecret
	): 
	index(index), firstName(fName), lastName(lName), nickName(nName),
	phoneNumber(pNumber), darkestSecret(dSecret)
{}

int Contact::getIndex() const {
	return (this->index);
}

std::string Contact::getFirstName() const {
	return (this->firstName);
}

std::string Contact::getLastName() const {
	return (this->lastName);
}

std::string Contact::getNickName() const {
	return (this->nickName);
}

std::string Contact::getPhoneNumber() const {
	return (this->phoneNumber);
}

std::string Contact::getDarkestSecret() const {
	return (this->darkestSecret);
}

void Contact::fieldFormated(std::string &field) const {
	int colWide = 10;
	std::string substr;

	if (field.length() < 10)
		substr = field;
	else
		substr = field.substr(0, 9).append(".");

	std::cout << std::right << std::setw(colWide) << substr << "|";
}

void Contact::print() {
	int columnWide = 10;
	
	std::cout << std::right << std::setw(columnWide) << this->index << "|";
	this->fieldFormated(this->firstName);	
	this->fieldFormated(this->lastName);	
	this->fieldFormated(this->nickName);	

}

