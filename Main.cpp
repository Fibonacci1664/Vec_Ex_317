#include<iostream>
#include<vector>
#include<string>

int main()
{
	std::string word;
	std::vector<std::string> words;

	std::cout << "Please enter words to store in a vector.\n";

	// Without a specified termination condition, you must manually type ctrl + z to tell the loop it has hit EOF (End of File), then it will break out of the loop, otherwise you never leave the loop.
	while (std::cin >> word)
	{
		words.push_back(word);
	}

	// Print the vector of words.
	for (decltype(words.size()) i = 0; i < words.size(); ++i)
	{
		std::cout << words[i] << " ";
	}

	std::cout << '\n';

	for (decltype(words.size()) i = 0; i < words.size(); ++i)
	{
		for (auto& c : words[i])
		{
			// The toupper expression needs to be cast to a char, as it normally rtns an int, and so the complier complains about data loss converting from int -> char otherwise.
			c = (char)std::toupper(c);
		}

	}

	// Print the vector of words.
	for (decltype(words.size()) i = 0; i < words.size(); ++i)
	{
		std::cout << words[i] << " ";
	}

	return 0;
}