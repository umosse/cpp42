#include "RPN.hpp"

RPN::RPN()
{
	std::cout << "Default constructor called" << std::endl;
}

RPN::RPN(const RPN &other)
{
	(void)other;
	std::cout << "Copy constructor called" << std::endl;
}

RPN::~RPN()
{
	std::cout << "Default destructor called" << std::endl;
}

RPN &RPN::operator=(const RPN &other)
{
	if (this != &other)
	{
		
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

