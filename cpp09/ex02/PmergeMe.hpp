#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>

class PmergeMe{
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		~PmergeMe();
		PmergeMe& operator=(const PmergeMe &other);

		bool	inputParsing(std::string input);
		int		sort();
	private:
		std::vector<double>_vec;
};

#endif