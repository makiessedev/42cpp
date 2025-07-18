#include "Animal.hpp"

Animal::Animal() : type("empty") {
  std::cout << "Animal default constructor called\n";
}

Animal::Animal(Animal &other) {
  std::cout << "Animal copy constructor called\n";
  this->setType(other.getType());
}

Animal &Animal::operator=(Animal &other) {
  std::cout << "Assign operator constructor called\n";
  if (this != &other) {
    this->setType(other.getType());
  }
  return *this;
}

Animal::~Animal() { std::cout << "Destructor called\n"; }

std::string Animal::getType() { return this->type; }

void Animal::setType(std::string type) { this->type = type; }
