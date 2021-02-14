/* Using a reference parameter */

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

void find_words(std::vector<std::string>& words, const std::string& str, const std::string& seperators);
void list_words(const std::vector<std::string>& words);

int main()
{
	std::string text;	// The string to be searched
	std::cout << "Enter some text terminated by *:\n";
	std::getline(std::cin, text, '*');

	const std::string seperators { " ,;.\"!?'\n" };	// Word delimiters
	std::vector<std::string> words;	// Words found

	find_words(words, text, seperators);
	list_words(words);

	return 0;
}

void find_words(std::vector<std::string>& words, const std::string& str, const std::string& seperators)
{
	std::size_t start {str.find_first_not_of(seperators)};	// First word start of index
	std::size_t end {};	// Index for end of a word

	while (start != std::string::npos)	// Find the words
	{
		end = str.find_first_of(seperators, start + 1);	// Find end of a word
		if (end == std::string::npos)	// Found a seperator?
			end = str.length();	// No, sos et to last + 1

		words.push_back(str.substr(start, end - start));	// Store the word
		start = str.find_first_not_of(seperators, end + 1);	// Find 1st character of next word
	}
}

void list_words(const std::vector<std::string>& words)
{
	std::size_t count {};	// Number output
	for (const auto& word : words)
	{
		std::cout << std::setw(15) << word;
		if (!(++count % 5))
			std::cout << std::endl;
	}

	std::cout << std::endl;
}

