// Similiar to "import" in java. This "imports" the iostream 
#include <iostream>

// This uses the namespace std (Standard, as in the standard library) and allows for shortened calls
// All following code will use the objects declared in "std" namespace
using namespace std;

// This is the starting point of the program. Everything branches out from here
int main()
{
	// cout = console output
	// This line outputs a string containing "Hello, World!" with a new line afterwards into the console output
	cout << "Hello, World!\n";

	// Sends a return code letting the user know everything is OK
	return 0;
}