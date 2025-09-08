#include <iostream>

/*
	Modify the program you wrote in exercise #1 so that readNumber() and writeAnswer()
	live in a separate file called “io.cpp”. Use a forward declaration to access them from main().

	If you’re having problems, make sure “io.cpp” is properly added to your project so it gets compiled.
*/

// Forward declare function prototypes
int readNumber();
void writeAnswer(int);

int main()
{
	// Get user input for 2 integers
	int user_num1{ readNumber() };
	int user_num2{ readNumber() };

	// Calclate and output the total to the console
	writeAnswer(user_num1 + user_num2);

	return 0;
}