/*****************************************************************************************************
 * std::string::rbegin
 *            ~~~~~~~~
 *****************************************************************************************************
 * reverse_iterator rbegin() noexcept;
 * const_reverse_iterator rbegin() noexcept;
 *****************************************************************************************************
 * Return a reverse iterator to reverse beginning
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Returns a reverse iterator pointing to the last character of the string (i.e., its reverse beginni-
 * ing).
 *
 * Reverse iterators iterate backwards: increasing them moves them towards the beginning of the string
 *
 * rbegin points to the character right before the one that would be pointed by member end.
 *****************************************************************************************************
 * Parameters
 * ~~~~~~~~~~
 * none
 *
 * Return Value
 * ~~~~~~~~~~~~
 * A reverse iterator to the beginnning of the string.
 *
 * If the string object is const-qualified, the function returns a const_iterator. Otherwise, it retu-
 * rns an iterator.
 *
 * Member types reverse_iterator and const_reverse_iterator are reverse random access iterator types
 * (pointing to a character and to a const character, respectively).
 ***************************************************************************************************/

 // string::rbegin/rend
#include <iostream>
#include <string>

int main()
{
	std::string str ("now step live...");
	for (std::string::reverse_iterator rit = str.rbegin(); rit != str.rend(); ++rit)
		std::cout << *rit;

	return 0;
}

