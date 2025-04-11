#include "Bureaucrat.hpp"
#include <exception>

int	main()
{
	try
	{
		Bureaucrat	bureaucrat("b1", 110);
		Form		form("f1", 140, 140);
		std::cout << bureaucrat << "\n";
		std::cout << form << "\n";
		bureaucrat.signForm(form);
	}
	catch (const std::exception &ex)
	{
		std::cerr << ex.what() << "\n";
	}
	
	try
	{
		Bureaucrat	bureaucrat("b1", 110);
		Form		form("f1", 10, 140);
		std::cout << bureaucrat << "\n";
		std::cout << form << "\n";
		bureaucrat.signForm(form);
	}
	catch (const std::exception &ex)
	{
		std::cerr << ex.what() << "\n";
	}

	try
	{
		Bureaucrat	bureaucrat("b1", 100);
		Form		form("f1", 0, 140);
		std::cout << bureaucrat << "\n";
		std::cout << form << "\n";
		bureaucrat.signForm(form);
	}
	catch (const std::exception &ex)
	{
		std::cerr << ex.what() << "\n";
	}

	try
	{
		Bureaucrat	bureaucrat("b1", 110);
		Form		form("f1", 140, 0);
		std::cout << bureaucrat << "\n";
		std::cout << form << "\n";
		bureaucrat.signForm(form);
	}
	catch (const std::exception &ex)
	{
		std::cerr << ex.what() << "\n";
	}

	try
	{
		Bureaucrat	bureaucrat("b1", 100);
		Form		form("f1", 151, 140);
		std::cout << bureaucrat << "\n";
		std::cout << form << "\n";
		bureaucrat.signForm(form);
	}
	catch (const std::exception &ex)
	{
		std::cerr << ex.what() << "\n";
	}

	try
	{
		Bureaucrat	bureaucrat("b1", 110);
		Form		form("f1", 140, 151);
		std::cout << bureaucrat << "\n";
		std::cout << form << "\n";
		bureaucrat.signForm(form);
	}
	catch (const std::exception &ex)
	{
		std::cerr << ex.what() << "\n";
	}

}