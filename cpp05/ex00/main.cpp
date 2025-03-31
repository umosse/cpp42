#include "Bureaucrat.hpp"
#include <exception>

int	main()
{
	try
	{
		Bureaucrat	bureaucrat("b1", 12);
	}
	catch (const std::exception &ex)
	{
		std::cerr << ex.what() << std::endl;
	}
}