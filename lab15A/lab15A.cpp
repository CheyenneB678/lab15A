/**********
*Cheyenne Buchert
*CIS 1202
*Lab 15 A
*4/15/2025
***********/

#include <iostream>
#include <cctype>

using namespace std;


//Custom exceptions
class invalidCharacterException {
public:
	const char* what()const noexcept {
		return "Invalid character: Input must be a letter (A-Z or a-z)";
	}
};

class invalidRangeException {
public:
	const char* what()const noexcept {
		return "Invalid range: Resulting character is not a valid letter or crosses case boundaries";
	}
};

//Function to calculate offset character
char character(char start, int offset) {
	//Check if start is a valid letter
	if (!isalpha(start)) {
		throw invalidCharacterException();
	}
	char result = start + offset;

	//Check if resulting character is still a letter and same case
	if (!isalpha(result)) {
		throw invalidRangeException();
	}

	//Disallow case transitions
	if (isupper(start) && !isupper(result)) {
		throw invalidRangeException();
	}
	if (islower(start) && !islower(result)) {
		throw invalidRangeException();
	}

	return result;
}