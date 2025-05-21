#include "Contact.hpp"

Contact::Contact(): 
	id(0), firstName(""), lasName(""), nickName(""), 
	phoneNumber(""), darkestSecret("")
{}

Contact::Contact(
	int id, std::string fName, std::string lName, std::string nName, 
	std::string pNumber, std::string dSecret
	): 
	id(id), firstName(fName), lastName(lName), nickName(nName),
	phoneNumber(pNumber), darkestSecret(dSecret)
{}

void Contact::fieldFormated(std::string &field) {
	int colWide = 10;
	std::string substr;

	if (field.length() < 10)
		substr = field;
	else
		substr = field.substr(0, 9).append(".");

	std::cout << std::right << std::setw(colWide) << this->firstName 
		<< "|";
}

void Contact::print() {
	int columnWide = 10;
	
	std::cout << std::right << std::setw(columnWide) << this->id << "|";
	this->fieldFormated(this->firstName);	
	this->fieldFormated(this->lastName);	
	this->fieldFormated(this->nickName);	
	this->fieldFormated(this->phoneNumber);	
	this->fieldFormated(this->darkestSecret);	
}
