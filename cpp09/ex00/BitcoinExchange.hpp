#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>

struct Date {
	long	year;
	int	month;
	int	day;
	float	value;
};

class BitcoinExchange{
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		~BitcoinExchange();
		BitcoinExchange& operator=(const BitcoinExchange &other);

		void	inputParsing(std::string &input, Date *dates);
		int		check_correct_date_db(std::string date);
		int		check_correct_value_db(std::string value);
		void	dbParsing(std::string &path);
		void	compare_dates(std::string date, Date *dates);
		std::map<std::string, float> _db;
		std::map<std::string, float> _ipt;
	private:


};

#endif