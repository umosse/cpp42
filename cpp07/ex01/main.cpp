#include "iter.hpp"
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <iterator>
#include <string>

void	ft_toupper(char &c)
{
	c = std::toupper(c);
}

void	ft_random(std::string &str)
{
	std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
	for (size_t i = 0; i < str.length(); i++)
	{
		int	j = std::rand() % 26 + 1;
		str[i] = alphabet[j];
	}
}

void	ft_add50(int &i)
{
	i += 50;
}

int	main(void)
{
	std::string	str = "Hello World\n";
	::iter(&str[0], str.length(), ft_toupper);
	std::cout << str;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	std::string strarray[] = {"This is the first one", "This is the second one", "This is the third one"};
	::iter(strarray, 3, ft_random);
	for (size_t i = 0; i < 3; i++)
	{
		std::cout << strarray[i] << "\n";
	}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	int intarray[] = {1, 2, 3, 4, 5, 6, 7};
	::iter(intarray, 7, ft_add50);
	for (size_t i = 0; i < 7; i++)
	{
		std::cout << intarray[i] << "\n";
	}
}
