#include "Bureaucrat.hpp"
#include <exception>

int	main()
{
	try
	{
		Bureaucrat	bureaucrat("b1", 145);
		std::cout << bureaucrat << "\n";
	}
	catch (const std::exception &ex)
	{
		std::cerr << ex.what() << "\n";
	}
}