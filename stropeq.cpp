/***********************************************************************/
/* std::string::operator=
 *            ~~~~~~~~~~~
 ***********************************************************************
 * string(1)		string& operator= (const string& str);
 * c-string(2)		string& operator= (const char* s);
 * character(3)		string& operator= (char c);
 * initializer list(4)	string& operator= (initializer_list<char> il);
 * moce(5)		string& operator= (string&& str) noexcept;
 ***********************************************************************
 * String assignment
 * ~~~~~~~~~~~~~~~~~
 * Assigns a new value to the string, replacing its current contents.
 *
 * Parameters
 * ~~~~~~~~~~
 * str
 * 	A string object, whose value is either copied (1) or moved (5) if
 * 	different from *this (if moved, str is left in an unspecified but
 * 	valid state).
 * s
 * 	Pointer to a null-terminated sequences of characters.
 * 	The sequence is copied as the new value for the string.
 * c
 * 	A character.
 * 	The string value is set to a single copy of this character (the
 * 	string length becomes 1).
 * il 
 * 	An initializer_list object.
 * 	These objects are automatically constructed from initializer list
 * 	declarators.
 * 	The charcters are coppied, in the same order.
 *
 * Return Value
 * ~~~~~~~~~~~~
 * *this
 ***********************************************************************/

// string assigning
#include <iostream>
#include <string>

int main()
{
	std::string str1, str2, str3;
	str1 = "Test string: ";	// c-string
	str2 = 'x';		// single character
	str3 = str1 + str2;	// string 

	std::cout << str3 << "\n";

	return 0;
}

