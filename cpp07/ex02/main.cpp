#include "Array.hpp"
#include <cstddef>
#include <exception>

int	main(void)
{
	try
	{
		Array<int>	intarray(8);
		for (size_t i = 0; i < intarray.size(); i++)
		{
			std::cout << intarray[i] << " ";
			intarray[i] = i;
		}
		std::cout << "\n";
		for (size_t i = 0; i < intarray.size(); i++)
		{
			std::cout << intarray[i] << " ";
		}
		std::cout << "\n";
		Array<int>	copyintarray(intarray);
		for (size_t i = 0; i < intarray.size(); i++)
		{
			intarray[i] = 0;
			std::cout << intarray[i] << " ";
		}
		std::cout << "\n";
		for (size_t i = 0; i < intarray.size(); i++)
		{
			std::cout << copyintarray[i] << " ";
		}
		std::cout << "\n";
		Array<std::string>	strarray(5);
		for (size_t i = 0; i < strarray.size(); i++)
		{
			std::cout << strarray[i] << " ";
			strarray[i] = "Hello";
		}
		std::cout << "\n";
		for (size_t i = 0; i < strarray.size(); i++)
		{
			std::cout << strarray[i] << " ";
		}
		std::cout << "\n";
		std::cout << intarray[42] << "\n";
	} catch (std::exception &ex) {
		std::cout << ex.what();
	}
}