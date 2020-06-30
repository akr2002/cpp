/*****************************************************************************************************
 * std::string::end
 *            ~~~~~
 *****************************************************************************************************
 * iterator end() noexcept;
 * const_iterator end() noexcept;
 *****************************************************************************************************
 * Return iterator to end
 * ~~~~~~~~~~~~~~~~~~~~~~
 * Returns an iterator pointing to the past-the-end character of the string.
 *
 * The past-the-end character is a theoretical character that would follow the last character in the
 * string. It shall not be dereferenced.
 *
 * Because the ranges used by functions of the standard library do not include the element pointed by
 * their closing iterator, this function is often used in combintion with std::begin to specify a 
 * range including all the characters in the string.
 *
 * If the object is an empty string, this function returns the same as std::begin.
 *****************************************************************************************************
 * Parameters
 * ~~~~~~~~~~
 * none
 *
 * Return Value
 * ~~~~~~~~~~~~
 * An iterator to the past-the-end of the string.
 *
 * If the string is const-qualified, the function returns a const_iterator. Otherwise, it returns an
 * iterator.
 *
 * Member types iterator and const_iterator are random access iterator types (pointing to a character
 * and to a const character, respectively).
 ****************************************************************************************************/

// string::begin/end
#include <iostream>
#include <string>

int main()
{
	std::string str("Test string");
	for (std::string::iterator it = str.begin(); it != str.end(); ++it)
		std::cout << *it;
	std::cout << "\n";

	return 0;
}

