#include <iostream>

int readNumber()
{
	std::cout << "Enter a whole number: ";

	int in_num{};
	std::cin >> in_num;

	return in_num;
}