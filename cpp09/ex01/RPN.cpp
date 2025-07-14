#include "RPN.hpp"
#include <cctype>

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

int	RPN::calculate(std::string str)
{
	int	result = 0;
	int	firstNb = 0;
	int	secondNb = 0;

	for (std::size_t i = 0; i < str.length(); i++)
	{
		if (std::isdigit(str[i]))
			_operands.push(std::atoi(&str[i]));
		else if (str[i] == '+')
		{
			secondNb = _operands.top();
			_operands.pop();
			firstNb = _operands.top();
			_operands.pop();
			result = firstNb + secondNb;
			_operands.push(result);
		}
		else if (str[i] == '-')
		{
			secondNb = _operands.top();
			_operands.pop();
			firstNb = _operands.top();
			_operands.pop();
			result = firstNb - secondNb;
			_operands.push(result);
		}
		else if (str[i] == '*')
		{
			secondNb = _operands.top();
			_operands.pop();
			firstNb = _operands.top();
			_operands.pop();
			result = firstNb * secondNb;
			_operands.push(result);
		}
		else if (str[i] == '/')
		{
			secondNb = _operands.top();
			if (secondNb == 0)
			{
				std::cerr << "Error : division by zero.\n";
				return 0;
			}
			_operands.pop();
			firstNb = _operands.top();
			_operands.pop();
			result = firstNb / secondNb;
			_operands.push(result);
		}
		// std::cout << result << "\n";
	}
	return (result);
}

int	RPN::inputParsing(std::string str)
{
	int	operatorNb = 0;
	int	operandNb = 0;

	for (std::size_t i = 0; i < str.length(); i++)
	{
		// First number
		if (i == 0)
		{
			if (!std::isdigit(str[i]))
			{
				std::cerr << "Error : wrong operation symbol (1).\n";
				return (1);
			}
			operandNb++;
		}
		// Second number
		else if (i == 2)
		{
			if (!std::isdigit(str[i]))
			{
				std::cerr << "Error : wrong operation symbol (2).\n";
				return (1);
			}
			operandNb++;
		}
		// There should be an operator or an operand every 2 characters
		else if (i % 2 == 0)
		{
			if (std::isdigit(str[i]))
				operandNb++;
			else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
				operatorNb++;
			else
			{
				std::cerr << "Error : wrong operation symbol (3).\n";
				return (1);
			}
		}
		// There should be spaces everywhere else
		else
		{
			if (str[i] != ' ')
			{
				std::cerr << "Error : wrong operation symbol (4).\n";
				return (1);
			}
		}
	}
	// There should always be one less operator than operands
	if (operandNb - operatorNb != 1)
	{
		std::cerr << "Error : wrong operator to operand ratio.\n";
		return (1);
	}
	// The last character should always be an operator
	if (str[str.length() - 1] != '+' && str[str.length() - 1] != '-' && str[str.length() - 1] != '*' && str[str.length() - 1] != '/')
	{
		std::cerr << "Error : wrong operation format.\n";
		return (1);
	}
	return (0);
}
