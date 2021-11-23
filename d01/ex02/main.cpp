#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringptr = &string;
	std::string& stringref = string;

	//memory
	std::cout << stringptr << std::endl;
	std::cout << &stringref << std::endl;
	//value
	std::cout << *stringptr << std::endl;
	std::cout << stringref << std::endl;

	return (0);
}