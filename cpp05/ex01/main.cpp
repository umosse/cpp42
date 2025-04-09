#include "Bureaucrat.hpp"
#include <exception>

int	main()
{
	try
	{
		Bureaucrat	bureaucrat("b1", 145);
		Form		form("f1", 150, 140);
		std::cout << bureaucrat << "\n";
		std::cout << form << "\n";
		bureaucrat.signForm(form);
	}
	catch (const std::exception &ex)
	{
		std::cerr << ex.what() << "\n";
	}
}