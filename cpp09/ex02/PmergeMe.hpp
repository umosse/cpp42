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
		int		sort(size_t multi);
		int		jacobsthal(size_t multi);
		int		pending();

	private:
		std::vector<double>_vec;
};

#endif