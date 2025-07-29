#include "PmergeMe.hpp"
#include <algorithm>
#include <cctype>
#include <cstddef>
#include <iterator>
#include <cstdlib>
#include <utility>
#include <vector>

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

int	PmergeMe::reverse(std::size_t multi)
{
	std::vector<int>	_mainVec;
	std::vector<int>	_pendVec;
	int	groups = 0;


	// Making groups in pend and main
	for (std::size_t i = 0; i < _vec.size(); i += multi)
	{
		if ((_vec.size() - i) <= multi)
		{
			int j = i;
			for (std::size_t k = 0; k < _vec.size() - i; k++)
			{
				_mainVec.push_back(_vec[j]);
				j++;
			}
			continue ;
		}
		if (groups % 2 == 0 && groups != 0)
		{
			int j = i;
			for (std::size_t k = 0; k < multi; k++)
			{
				_pendVec.push_back(_vec[j]);
				j++;
			}
		}
		else
		{
			int j = i;
			for (std::size_t k = 0; k < multi; k++)
			{
				_mainVec.push_back(_vec[j]);
				j++;
			}
		}
		groups++;
	}

	std::cout << "multi = " << multi << "\n";
	for (std::size_t i = 0; i < _pendVec.size(); i++)
	{
		std::cout << _pendVec[i] << " ";
	}
	std::cout << "\n";
	for (std::size_t i = 0; i < _mainVec.size(); i++)
	{
		std::cout << _mainVec[i] << " ";
	}
	std::cout << "\n";

	

	if (multi == 1)
		return 1;
	reverse(multi / 2);
	return 0;
}

int	PmergeMe::jacobsthal(size_t input)
{
	int	current = 1;
	int	previous = 0;

	if (input == 0)
		return 0;
	if (input == 1)
		return 1;
	for (std::size_t i = 0; i < input; i++)
	{
		current = current + (previous * 2);
		previous = current;
	}
	std::cout << current << "\n";
	return current;
}

int	PmergeMe::sort(size_t multi)
{
	bool	odd = false;
	std::size_t finalMulti = multi;

	if (_vec.size() % 2 == 1)
		odd = true;
	std::size_t	goodSize = _vec.size() - (_vec.size() % (multi * 2));
	// std::cout << "goodSize = " << goodSize << "\n";
	// std::cout << "multi = " << multi << "\n";
	for (std::size_t i = 0; i < (goodSize) / 2; i += multi)
	{
		int	algo = multi - 1 + (i * 2);
		// std::cout << _vec[algo] << "\n";
		// std::cout << _vec[algo + multi] << "\n";
		if (_vec[algo] > _vec[algo + multi])
		{
			for (std::size_t y = 0; y < multi; y++)
			{
				std::swap(_vec[algo - y], _vec[algo + multi - y]);
				// std::cout << _vec[8] << " " << _vec[9] << "\n";
			}
		}
	}

	for (std::size_t i = 0; i < _vec.size(); i++)
	{
		std::cout << _vec[i] << " ";
	}
	std::cout << "\n";

	// multi = 1, i = 0; _vec[1 - 1 + (0 * 2)] = _vec[0] > _vec[1] -> _vec[0] > _vec[1]
	// multi = 1, i = 1; _vec[1 - 1 + (1 * 2)] = _vec[2] > _vec[3] -> 
	// multi = 1, i = 2; _vec[1 - 1 + (2 * 2)] = _vec[4] > _vec[5] -> 
	// multi = 1, i = 3; _vec[1 - 1 + (3 * 2)] = _vec[6] > _vec[7] -> 

	// multi = 2, i = 0; _vec[2 - 1 + (0 * 2)] = _vec[1] > _vec[3] -> _vec[1] > _vec[3]; _vec[0] > _vec[2]
	// multi = 2, i = 2; _vec[2 - 1 + (2 * 2)] = _vec[5] > _vec[7] -> 
	// multi = 2, i = 4; _vec[2 - 1 + (4 * 2)] = _vec[9] > _vec[11] -> 
	// multi = 2, i = 6; _vec[2 - 1 + (6 * 2)] = _vec[13] > _vec[15] -> 

	// multi = 4, i = 0; _vec[4 - 1 + (0 * 2)] = _vec[3] > _vec[7] -> _vec[3] > _vec[7]; _vec[2] > _vec[6]; _vec[1] > _vec[5]; _vec[0] > _vec[4]
	// multi = 4, i = 4; _vec[4 - 1 + (4 * 2)] = _vec[11] > _vec[15] -> 
	// multi = 4, i = 8; _vec[4 - 1 + (8 * 2)] = _vec[19] > _vec[23] -> 
	// multi = 4, i = 12; _vec[4 - 1 + (12 * 2)] = _vec[27] > _vec[31] -> 

	if (multi <= _vec.size() / 2)
		finalMulti = sort(multi * 2);
	return finalMulti;
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