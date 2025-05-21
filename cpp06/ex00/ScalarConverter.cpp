#include "ScalarCoonverter.hpp"
#include <cctype>
#include <iostream>
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

	if (i < )
	if (std::isprint(i))
		std::cout << "char: " << c << "\n";

	std::cout << "int: " << i << "\n";
	std::cout << "float: " << f << "\n";
	std::cout << "double: " << d << "\n";
	//overflow : std::numeric limit > renvoie le max/min de la string > atoi et comparer si la string a changee.
	//nan : std::isnan
	//inf : std::isinf
}