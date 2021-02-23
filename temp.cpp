#include <iostream>
#include <string>

int main ()
{
  std::string name;

  std::cout << "Please, enter your full name: ";
  std::getline (std::cin,name);
  std::cout << "Hello, " << name << "!\n";

  std::string name1;

  std::cout << "Please, enter your full name: ";
  std::getline (std::cin,name1);
  std::cout << "Hello, " << name1 << "!\n";
  return 0;
}
