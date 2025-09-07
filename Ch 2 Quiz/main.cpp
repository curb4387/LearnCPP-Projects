#include <iostream>

/*
	Write a single-file program (named main.cpp) that reads two separate
	integers from the user, adds them together, and then outputs the
	answer. The program should use 3 functions:
		1) function readNumber() to get and return a single integer from user
		2) function writeAnswer() to output answer. 1 parameter, no return value
		3) main() to glue above functions together
*/

int readNumber()
{
	std::cout << "Enter a whole number: ";

	int in_num{};
	std::cin >> in_num;

	return in_num;
}

void writeAnswer(int ans)
{
	std::cout << "The total is: " << ans;
}

int main()
{
	// Get user input for 2 integers
	int user_num1{ readNumber() };
	int user_num2{ readNumber() };

	// Calclate and output the total to the console
	writeAnswer(user_num1 + user_num2);

	return 0;
}