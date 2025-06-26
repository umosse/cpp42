#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

#include <iostream>

class ScalarConverter {
	public:
		static void	convert(std::string s);
private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		~ScalarConverter();
		ScalarConverter&	operator=(const ScalarConverter &other);
	};

#endif	