#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>

// struct Date {
// 	int	year;
// 	int	month;
// 	int	day;
// };

class BitcoinExchange{
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		~BitcoinExchange();
		BitcoinExchange& operator=(const BitcoinExchange &other);

		void	inputParsing(std::string input);
		int		check_correct_date_db(std::string date);
		int		check_correct_value_db(std::string value);
		void	dbParsing(std::string &path);
		std::map<std::string, float> _db;
	private:


};

#endif