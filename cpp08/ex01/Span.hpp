#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		~Span();
		Span& operator=(const Span &other);

		void	addNumber(int i);
		void	addManyNumbers(std::vector<int>::iterator first, std::vector<int>::iterator last);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

	private:
		unsigned int	_N;
		unsigned int	_size;
		std::vector<int>	_vect;
};

#endif