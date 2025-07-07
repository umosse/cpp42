#include "BitcoinExchange.hpp"
#include <iomanip>
#include <map>
#include <string>

int	main()
{
	BitcoinExchange	btc;
	std::string db = "data.csv";

	btc.dbParsing(db);
	for (std::map<std::string, float>::iterator it = btc._db.begin(); it != btc._db.end(); it++ )
		std::cout << it->first << " " << std::fixed << std::setprecision(2) << it->second << "\n";
	return 0;
}