#include "ScalarCoonverter.hpp"
#include <cctype>
#include <cmath>
#include <iomanip>
#include <ios>
#include <iostream>
#include <limits>
#include <string>
#include <cstdlib>

ScalarConverter::ScalarConverter()
{
	std::cout << "Default constructor called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter destructor called" << std::endl;
}

void ScalarConverter::convert(std::string s)
{
	double	d = std::strtod(s.c_str(), NULL);
	float	f = static_cast<float>(d);
	int		i = static_cast<int>(d);
	char	c = static_cast<char>(d);

	if (std::isnan(d) && s.length() == 3)
	{
		std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan\n";
		return ;
	}
	if (std::isinf(d) && s.length() == 3)
	{
		std::cout << "char: impossible\nint: impossible\nfloat: inff\ndouble: inf\n";
		return ;
	}

	bool	go = false;
	for (size_t i = 0; i < s.length(); i++)
	{
		if (std::isdigit(s[i]))
		go = true;
	}

	if (go)
	{
		if (i < 0 || i > 127)
			std::cout << "char: impossible\n";
		else if (std::isprint(i))
			std::cout << "char: " << c << "\n";
		else
			std::cout << "char: Non displayable\n";
		if (std::numeric_limits<int>::max() < d || (std::numeric_limits<int>::min() > d))
		{
			std::cout << "int: impossible\n";
			go = false;
		}
		size_t	dot = s.find('.');
		size_t	precision = 1;
		if (dot != std::string::npos)
		{
			precision = s.length() - dot - 1;
			if (precision > 5)
				precision = 5;
		}
		if (go)
			std::cout << "int: " << i << "\n";
		std::cout << std::fixed << std::setprecision(precision) << "float: " << f << "f\n";
		std::cout << std::setprecision(0) << "double: " << d << "\n";
	}
	else
	{
		std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible\n";;
	}
}
