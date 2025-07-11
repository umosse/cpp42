#include "BitcoinExchange.hpp"
#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <ios>
#include <iterator>
#include <map>
#include <sstream>
#include <stdexcept>
#include <string>
#include <cctype>

BitcoinExchange::BitcoinExchange()
{
	std::cout << "Default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	(void)other;
	std::cout << "Copy constructor called" << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "Default destructor called" << std::endl;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
	{
		_db = other._db;
		_ipt = other._ipt;
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

void	BitcoinExchange::compare_dates(std::string date, Date *dates)
{
	(void)date;
	std::map<std::string, float>::iterator it;
	for (int y = dates->year; y > 0; y--)
	{
		for (int m = (y == dates->year ? dates->month : 12); m > 0; m--)
		{
			for (int d = (y == dates->year && m == dates->month ? dates->day : 31); d > 0; d--)
			{
				std::stringstream	currentDate;
				currentDate << y << "-" << std::setw(2) << std::setfill('0') << m << "-" << std::setw(2) << d;
				// std::cout << currentDate.str() << "\n";
				it = _db.find(currentDate.str());
				if (it != _db.end())
				{
					std::stringstream	ss;
					ss << std::fixed << std::setprecision(2) << it->second * dates->value;
					std::cout << currentDate.str() << " => " << dates->value << " = " << ss.str() << "\n";
					return ;
				}
			}
		}
	}
	std::cout << "Error : date is impossible to find.\n";
}

int	check_correct_date_input(std::string date, Date *dates)
{
	std::string	year;
	std::string	month;
	std::string	day;
	int	months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	std::size_t firstDash = date.find("-");
	// Check year
	if (firstDash == 0)
	{
		std::cout << "Invalid year format.\n";
		return (1);
	}
	year = date.substr(0, firstDash);
	for (std::size_t i = 0; i < year.length(); i++)
	{
		if (!std::isdigit(year[i]))
		{
			std::cout << "Invalid year format.\n";
			return (1);
		}
	}
	
	// Check month
	std::size_t secondDash = date.find("-", firstDash + 1);
	secondDash -= firstDash + 1;
	if (secondDash != 2)
	{
		std::cout << "Invalid month1 format.\n";
		return (1);
	}
	int	intMonth = std::atoi(date.substr(firstDash + 1, secondDash).c_str());
	if (intMonth < 0 || intMonth > 12)
		std::cout << "Invalid month2 format.\n";
	month = date.substr(firstDash + 1, secondDash);

	// Check day
	secondDash += firstDash + 1;
	if (date.substr(secondDash + 1).length() < 2)
	{
		std::cout << "Invalid day1 format.\n";
		return (1);
	}
	int	intDay = std::atoi(date.substr(secondDash + 1).c_str());
	if (intDay < 1 || ((std::atoi(year.c_str()) % 4 == 0) && intMonth == 2 && intDay > 29))
	{
		std::cout << "Invalid day2 format.\n";
		return (1);
	}
	if (intDay > months[intMonth - 1])
	{
		std::cout << "Invalid day3 format.\n";
		return (1);
	}
	day = date.substr(secondDash + 1);
	if (day.length() != 2)
	{
		std::cout << "Invalid day4 format.\n";
		return (1);
	}

	dates->day = std::atol(day.c_str());
	dates->month = std::atol(month.c_str());
	dates->year = std::atol(year.c_str());

	return (0);
}

int	check_correct_value_input(std::string value, Date *dates)
{
	float	floatValue;
	for (std::size_t i = 0; i < value.length(); i++)
	{
		if (!std::isdigit(value[i]))
		{
			if (value[i] != '.')
			{
				std::cout << "Value is not a number\n";
				return (1);
			}
		}
	}
	floatValue = std::atof(value.c_str());
	if (floatValue < 0)
	{
		std::cout << "Value is negative\n";
		return (1);
	}
	if (floatValue > 1000)
	{
		std::cout << "Value is over 1000\n";
		return (1);
	}
	dates->value = floatValue;
	return (0);
}

void	BitcoinExchange::inputParsing(std::string &input, Date *dates)
{
	std::ifstream	inputFile;
	std::string		line;

	inputFile.open(input.c_str());
	if (!inputFile.is_open())
	{
		throw std::logic_error("Failed to open the inputFile (1).\n");
	}
	while (std::getline(inputFile, line))
	{
		if (line == "date | value")
			continue;

		bool	digit = 0;
		for (size_t i = 0; i < line.length(); i++)
		{
			if (digit == 1)
				continue;
			if (!std::isdigit(line[i]))
			{
				if (line[i] != '|' && line[i] != ' ' && line[i] != '.' && line[i] != '-')
				{
					std::cout << "Invalid format in input file (2).\n";
					digit = 1;
				}
			}
		}
		if (digit == 1)
			continue;

		std::size_t	pipe = line.find("|");
		
		if (pipe < 1)
		{
			std::cout << "Invalid date in input file (3).\n";
			continue;
		}

		if (line[pipe - 1] != ' ' || line[pipe + 1] != ' ')
		{
			std::cout << "Invalid date in input file (4).\n";
			continue;
		}
		// Parsing before the pipe :

		std::string	date = line.substr(0, pipe - 1);
		if (check_correct_date_input(date, dates))
			continue;
		
		// Parsing after the pipe :

		std::string	value = line.substr(pipe + 2);
		if (check_correct_value_input(value, dates))
			continue;

		compare_dates(date, dates);

		_ipt[date] = std::atof(value.c_str());
	}
}

int	BitcoinExchange::check_correct_date_db(std::string date)
{
	std::string	year;
	std::string	month;
	std::string	day;
	int	months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	std::size_t firstDash = date.find("-");
	// Check year
	if (firstDash == 0)
		throw std::range_error("Invalid year format.\n");
	year = date.substr(0, firstDash);
	for (std::size_t i = 0; i < year.length(); i++)
	{
		if (!std::isdigit(year[i]))
			throw std::range_error("Invalid year format.\n");
	}
	
	// Check month
	std::size_t secondDash = date.find("-", firstDash + 1);
	secondDash -= firstDash + 1;
	if (secondDash != 2)
		throw std::range_error("Invalid month1 format.\n");
	int	intMonth = std::atoi(date.substr(firstDash + 1, secondDash).c_str());
	if (intMonth < 0 || intMonth > 12)
		throw std::range_error("Invalid month2 format.\n");
	month = date.substr(firstDash + 1, secondDash);

	// Check day
	secondDash += firstDash + 1;
	if (date.substr(secondDash + 1).length() < 2)
		throw std::range_error("Invalid day1 format.\n");
	int	intDay = std::atoi(date.substr(secondDash + 1).c_str());
	if (intDay < 1 || ((std::atoi(year.c_str()) % 4 == 0) && intMonth == 2 && intDay > 29))
		throw std::range_error("Invalid day2 format.\n");
	if (intDay > months[intMonth - 1])
		throw std::range_error("Invalid day3 format.\n");
	day = date.substr(secondDash + 1);
	if (day.length() != 2)
		throw std::range_error("Invalid day4 format.\n");

	return (0);
}

int	BitcoinExchange::check_correct_value_db(std::string value)
{
	float	floatValue;
	floatValue = std::atof(value.c_str());
	for (std::size_t i = 0; i < value.length(); i++)
	{
		if (!std::isdigit(value[i]))
		{
			if (value[i] != '.')
			{
				std::cout << "Value is not a number\n";
				return (1);
			}
		}
	}
	if (floatValue < 0)
		throw std::range_error("Value is outside of the allowed range. \n");

	return (0);
}

void	BitcoinExchange::dbParsing(std::string &path)
{
	std::ifstream	file;
	std::string		line;

	file.open(path.c_str());
	if (!file.is_open())
	{
		throw std::logic_error("Failed to open the file.\n");
	}
	while (std::getline(file, line))
	{
		if (line == "date,exchange_rate")
			continue;

		for (size_t i = 0; i < line.length(); i++)
		{
			if (!std::isdigit(line[i]) && line[i] != '-' && line[i] != ',' && line[i] != '.')
				throw std::length_error("Invalid format in file.\n");
		}

		std::size_t	comma = line.find(",");
		
		if (comma < 1)
			throw std::length_error("Invalid date in file.\n");

		// Parsing before the comma :

		std::string	date = line.substr(0, comma);
		if (check_correct_date_db(date))
			throw std::logic_error("Wrong date format.\n");
		
		// Parsing after the comma :

		std::string	value = line.substr(comma + 1);
		if (check_correct_value_db(value))
			throw std::logic_error("Wrong value format.\n");

		_db[date] = std::atof(value.c_str());
	}
}