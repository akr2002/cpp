#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

int main()
{
	std::string text {};
	std::cout << "Enter some text terminated by *:\n";
	std::getline(std::cin, text, '*');

	const std::string separators{ " ,;:.\"!?'\n" };
	std::vector<std::string> words {};
	std::vector<std::size_t> counts {};
	std::size_t start { text.find_first_not_of(separators) };

	while (start != std::string::npos)
	{
		std::size_t end { text.find_first_of(separators, start + 1) };
		if (end == std::string::npos)
			end = text.length();
		std::string word { text.substr(start, end - start) };

		bool is_in { false };

		for (int i {}; i < words.size(); ++i)
		{
			if (words[i] == word)
			{
				++counts[i];
				is_in = true;
				break;
			}
		}
		if (!is_in)
		{
			words.push_back(word);
			counts.push_back(1);
		}
		start = text.find_first_not_of(separators, end + 1);
	}

	std::size_t max_length {};
	for (const auto& word : words)
		if (max_length < word.length())
			max_length = word.length();

	std::cout << "The string contains the following " << words.size() << " words and counts:\n";
	std::size_t count {};
	const std::size_t perline {3};
	for (std::size_t i {}; i < words.size(); ++i)
	{
		std::cout << std::setw(max_length) << std::left << words[i]
			<< std::setw(4) << std::right << counts[i] << " ";
		if (!(++count % perline))
			std::cout << std::endl;
	}
	std::cout << std::endl;

	return 0;
}
