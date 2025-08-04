#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <cstddef>
#include <iostream>
#include <vector>

class PmergeMe{
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		~PmergeMe();
		PmergeMe& operator=(const PmergeMe &other);

		bool	inputParsing(std::string input);
		int		sort(std::size_t multi);
		std::size_t		jacobsthal(std::size_t input);
		std::size_t		BinarySearch(int start, int end, int input, int multi);
		int		reverse(std::size_t multi);

	private:
		std::vector<double>_vec;
		std::vector<std::pair<int, int> >_pairVec;
};

#endif