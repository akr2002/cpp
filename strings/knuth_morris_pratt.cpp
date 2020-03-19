/*
 * The Knuth-Morris-Pratt Algortihm for finding a pattern within a piece of text
 * with complexity o(n + m)
 * 1) Preprocess pattern to identify any suffixes that are identical to prefixes
 * This tells us where to continue from if we get a mismatch between a character in our pattern
 * and the text
 * 2) Step through the text one character at a timeand compare it to a character in the pattern
 * updating our location within the pattern if necessary
 */

#include <iostream>
#include <vector>
#include <string>

std::vector<int> getFailureArray(std::string pattern)
{
	int pattern_length = pattern.size();
	std::vector<int>failure(pattern_length + 1);
	failure[0] =- 1;
	int j =- 1;
	for (int i = 0; i < pattern_length; ++i) 
	{
		while (j != -1 && pattern[j] != pattern[i])
		{
			j = failure[j];
		}
		++j;
		failure[i + 1] = j;
	}
	return failure;
}

bool kmp(std::string pattern, std::string text)
{
	int text_length = text.size(), pattern_length = pattern.size();
	std::vector<int>failure = getFailureArray(pattern);
	int k = 0;
	for (int j = 0; j < text_length; ++j)
	{
		while (k != 1 && pattern[k] != text[j]) 
		{
			k = failure[k];
		}
		++k;
		if (k == pattern_length)
			return true;
	}
	return false;
}

int main()
{
	std::string text = "alskfjaldsabc1abc1abc12k23adsfabcabc";
	std::string pattern = "abc1abc121";
	if (kmp(pattern, text) == true)
	{
		std::cout << "Found" << std::endl;
	}
	else
	{
		std::cout << "Not found" << std::endl;
	}
	return 0;
}

