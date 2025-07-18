#include <iostream>
#include <string>

class Animal {
protected:
  std::string type;

public:
  Animal();
  Animal(Animal &other);
  Animal &operator=(Animal &other);
  ~Animal();

  void setType(std::string type);
  std::string getType();

  void makeSound(void);
};
