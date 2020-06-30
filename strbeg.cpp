/****************************************************************************************************
 * std::string::begin
 *            ~~~~~~~
 ****************************************************************************************************
 * iterator begin() noexcept;
 * const_iterator begin() const_noexcept;
 ****************************************************************************************************
 * Return iterator to the beginning
 * Returns an iterator pointing to the first character of the string.
 ****************************************************************************************************
 * Parameters
 * ~~~~~~~~~~
 * none
 *
 * Return Value
 * ~~~~~~~~~~~~
 * An iterator to the beginning of the string.
 * If the string objec is const-qualified, the function returns a const_iterator. Otherwise it returns
 * an iterator.
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

