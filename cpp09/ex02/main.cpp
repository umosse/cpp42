#include "PmergeMe.hpp"
#include <cstddef>
#include <iterator>

int	main(int argc, char **argv)
{
	if (argc < 2)
		return 1;
	PmergeMe	merge;
	std::string	str;
	for (int i = 1; i <= argc - 1; i++)
	{
		str += argv[i];
		str += " ";
	}
	std::cout << str << "\n";
	if (!merge.inputParsing(str))
		return 1;
	
	std::size_t	multi = 1;
	multi = merge.sort(multi);

	return 0;
}