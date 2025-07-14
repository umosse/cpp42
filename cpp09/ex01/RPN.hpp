#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <map>
#include <stack>
#include <cstdlib>

class RPN{
	public:
		RPN();
		RPN(const RPN &other);
		~RPN();
		RPN& operator=(const RPN &other);

		int	inputParsing(std::string str);
		int	calculate(std::string str);
	private:
		std::stack<int>	_operands;
};

#endif