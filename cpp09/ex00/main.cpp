#include "BitcoinExchange.hpp"
#include <exception>
#include <iomanip>
#include <map>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return 1;
	try
	{
		BitcoinExchange	btc;
		Date	dates;
		std::string db = "data.csv";
		std::string input = argv[1];

		btc.dbParsing(db);
		// for (std::map<std::string, float>::iterator it = btc._db.begin(); it != btc._db.end(); it++ )
		// 	std::cout << it->first << " " << std::fixed << std::setprecision(2) << it->second << "\n";

		btc.inputParsing(input, &dates);
		// for (std::map<std::string, float>::iterator it = btc._ipt.begin(); it != btc._ipt.end(); it++ )
		// 	std::cout << it->first << " " << std::fixed << std::setprecision(2) << it->second << "\n";
	} catch (std::exception &ex)
	{
		std::cout << ex.what();
	}
	
	return 0;
}