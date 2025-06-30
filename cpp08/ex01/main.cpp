#include "Span.hpp"
#include <cstdlib>
#include <exception>
#include <vector>

// Subject main

// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << "\n";
// 	std::cout << sp.longestSpan() << "\n";
// 	return 0;
// }

// Custom main

int	main()
{
	try
	{
		// Making a random vector to add multiple numbers at once.
		srand(time(0));

		int	numbersToAdd = 10;

		std::vector<int> randVec;
		for (int i = 0; i < numbersToAdd; i++)
		{
			randVec.push_back(std::rand() % 10000);
			std::cout << randVec[i] << "\n";
		}

		std::vector<int>::iterator first = randVec.begin();
		std::vector<int>::iterator last = randVec.end();

		// Making the actual span.
		Span sp = Span(10);

		sp.addManyNumbers(first, last);
		std::cout << sp.shortestSpan() << "\n";
		std::cout << sp.longestSpan() << "\n";
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << "\n";
	}
	return 0;
}