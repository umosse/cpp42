#include "PmergeMe.hpp"
#include <cctype>
#include <cstddef>
#include <iterator>
#include <cstdlib>

PmergeMe::PmergeMe()
{
	std::cout << "Default constructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	(void)other;
	std::cout << "Copy constructor called" << std::endl;
}

PmergeMe::~PmergeMe()
{
	std::cout << "Default destructor called" << std::endl;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other)
	{
		
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

int	PmergeMe::sort()
{
	
}

bool	PmergeMe::inputParsing(std::string input)
{
	// Checking if everything is a number or space. and pushing every number in a vector.
	for (std::size_t i = 0; i < input.length(); i++)
	{
		std::string	num;
		if (!std::isdigit(input[i]) && input[i] != ' ')
		{
			std::cerr << "Parsing error : not a number.\n";
			return false;
		}
		while (input[i] != ' ')
		{
			num += input[i];
			i++;
		}
		_vec.push_back(std::atol(num.c_str()));
	}
	// Checking for overflows
	for (std::size_t i = 0; i < _vec.size(); i++)
	{
		if (_vec[i] > 2147483647 || _vec[i] < -2147483648)
		{
			std::cerr << "Parsing error : number is too high.\n";
			return false;
		}
	}
	// Checking for repeats
	for (std::size_t i = 0; i < _vec.size(); i++)
	{
		for (std::size_t j = i + 1; j < _vec.size(); j++)
		{
			if (_vec[i] == _vec[j])
			{
				std::cerr << "Parsing error : duplicate number found.\n";
				return false;
			}
		}
	}
	return true;
}