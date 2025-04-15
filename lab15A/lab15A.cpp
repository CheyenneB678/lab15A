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