#include "Span.hpp"
#include <algorithm>
#include <stdexcept>
#include <vector>

Span::Span() : _N(0), _size(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int	n) : _N(n), _size(0)
{
	std::cout << "Parameter constructor called" << std::endl;
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_N = other._N;
		_size = other._size;
		_vect = other._vect;
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

void	Span::addNumber(int n)
{
	if (_N >= _size)
		throw std::length_error("Error : No more numbers can be added.");
	_vect.push_back(n);
	_size++;
}

unsigned int	Span::shortestSpan()
{
	if (_size <= 1)
		throw std::range_error("Error : Range impossible to determine.");
	std::vector<int>::iterator first = _vect.begin();
	std::vector<int>::iterator second = _vect.begin() + 1;
	std::vector<int>::iterator last = _vect.end();
	std::sort(first, last);
	last--;
	unsigned int	span = last - first;
	
}

unsigned int	Span::longestSpan()
{
	if (_size <= 1)
		throw std::range_error("Error : Range impossible to determine.");
	std::vector<int>::iterator first = _vect.begin();
	std::vector<int>::iterator last = _vect.end();
	std::sort(first, last);
	last--;
	unsigned int	span = last - first;
	return span;
}

Span::~Span()
{
	std::cout << "Default destructor called" << std::endl;
}
