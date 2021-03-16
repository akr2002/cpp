#include <iostream>
#include <iomanip>
#include <memory>
#include <string>
#include <string_view>
#include <vector>

using Words = std::vector<std::shared_ptr<std::string>>;

void swap(Words& words, std::size_t first, std::size_t second);
void sort(Words& words);
void sort(Words& words, std::size_t start, std::size_t end);
void extract_words(Words& words, std::string_view text, std::string_view separators);
void show_words(const Words& words);
std::size_t max_word_length(const Words& words);

/* 
 * - `swap()` is a helper function that interchanges the elements at indexes `first`
 *   and `second` in the `words` vector.
 *
 * - The overload of `sort()` with three function parameters will use the quicksort 
 *   algorithm to sort a contiguous sequence of elements in `words` from index `start`
 *   to index `end` inclusive. Indexes specifying a range are needed because the
 *   quicksort algorithm invloves sorting subsets of a sequence.
 *
 * - The overload of `sort()` with one single parameter simply calls the one with 
 *   three parameters (see later); it is there for your convinience - to allow you
 *   to call `sort()` with a single `vector<>` argument.
 *
 * - `extract_words()` extracts words from `text` and stores smart pointers to the
 *   words in the `words` vector.
 *
 * - `show_words()` outputs the words in `words`.
 *
 * - `max_word_length()` determines the length of the longest word in `words` and is 
 *   just to help make the output pretty.
 */

int main()
{
	Words words;
	std::string text;	// The string to be sorted
	const auto separators {" ,.!?\"\n"};	// Word delimiters

	// Read the string to be searched from stdin
	std::cout << "Enter a string terminated by *:" << std::endl;
	std::getline(std::cin, text, '*');

	extract_words(words, text, separators);
	if (words.empty())
	{
		std::cout << "No words in text." << std::endl;
		return 1;
	}

	sort(words);	// Sort the words
	show_words(words);	// Output the words

	return 0;
}

void extract_words(Words& words, std::string_view text, std::string_view seperators)
{
	std::size_t start {text.find_first_not_of(seperators)};	// Start 1st word
	std::size_t end {};	// Index for the end of a word

	while (start != std::string_view::npos)
	{
		end = text.find_first_of(seperators, start + 1);// Find end seperator
		if (end == std::string_view::npos)	// End of text?
			end = text.length();		// Yes, sp set it to last + 1

		words.push_back(std::make_shared<std::string>(text.substr(start, end - start)));
		start = text.find_first_not_of(seperators, end + 1);// Find next word
	}
}

void swap(Words& words, std::size_t first, std::size_t second)
{
	auto temp {words.at(first)};
	words.at(first) = words.at(second);
	words.at(second) = temp;
}

void sort(Words& words, std::size_t start, std::size_t end)
{
	// start index must be less than end index for 2 or more elements
	if (!(start < end))
		return ;

	// Choose middle address to partition set
	swap(words, start, (start + end) / 2);	// Swap middle address with start

	// Check words against chosen word
	std::size_t current {start};
	for (std::size_t i {start + 1}; i <= end; ++i)
	{
		if (*words.at(i) < *words.at(start))// Is word less than chosen word? 
			swap(words, ++current, i);  // Yes, so swap to the left
	}

	swap(words, start, current);	// Swap chosen and last swapped words

	if (current > start) 
		sort(words, start, current - 1);// Sort left subset if exists
	if (end > current + 1) 
		sort(words, current + 1, end);	// Sort right subset if exists
}

// Sort strings in ascending sequence
void sort(Words& words)
{
	if (!words.empty())
		sort(words, 0, words.size() - 1);
}

// This is a helper function that is used by the `show_words()` function
std::size_t max_word_length(const Words& words)
{
	std::size_t max {};
	for (auto& pword : words)
		if (max < pword->length()) max = pword->length();

	return max;
}

// This function outputs the words pointed by the vector elements. It's quite long
// because it lists all words beginning with the same letter on the same line, with
// up to eight words per line.
void show_words(const Words& words)
{
	const std::size_t field_width {max_word_length(words) + 1};
	const std::size_t words_per_line {8};
	std::cout << std::left << std::setw(field_width) << *words.at(0);	// Output the first word

	std::size_t words_in_line {};	// Words in current line
	for (std::size_t i {1}; i < words.size(); ++i)
	{// Output newline when initial letter changes or after 8 per line
		if ((*words.at(i))[0] != (*words.at(i - 1))[0] || ++words_in_line == words_per_line)
		{
			words_in_line = 0;
			std::cout << std::endl;
		}
		std::cout << std::setw(field_width) << *words.at(i);// Output a word
	}
	std::cout << std::endl;
}

