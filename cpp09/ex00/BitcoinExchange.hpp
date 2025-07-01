#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>

struct Date {
	int	year;
	int	month;
	int	day;
};

class BitcoinExchange{
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		~BitcoinExchange();
		BitcoinExchange& operator=(const BitcoinExchange &other);

		void	inputParsing(std::string input);
		void	dbParsing(std::string path);
	private:

};

#endif