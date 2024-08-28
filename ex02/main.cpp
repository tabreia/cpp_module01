#include <iostream>

int main (void)
{
	std::string string;
	std::string *stringPTR;

	string = "HI THIS IS BRAIN";
	stringPTR = &string;

	std::string &stringREF = string;

	std::cout << "String Memory address: " << &string << std::endl;
	std::cout << "StringPTR Memory address: " << &stringPTR << std::endl;
	std::cout << "StringREF Memory address: " << &stringREF << std::endl;
	std::cout << "String value: " << string << std::endl;
	std::cout << "StringPTR value: " << stringPTR << std::endl;
	std::cout << "StringREF value: " << stringREF << std::endl;
}