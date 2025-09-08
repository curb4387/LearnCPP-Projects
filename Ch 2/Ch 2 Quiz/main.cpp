#include <iostream>
#include "io.h"

/*
	Modify the program you wrote in #2 so that it uses a header file (named io.h) to access
	the functions instead of using forward declarations directly in your code (.cpp) files.
	
	Make sure your header file uses header guards.
*/

int main()
{
	// Get user input for 2 integers
	int user_num1{ readNumber() };
	int user_num2{ readNumber() };

	// Calclate and output the total to the console
	writeAnswer(user_num1 + user_num2);

	return 0;
}