#include "Bureaucrat.hpp"
#include <exception>

int	main()
{
	try
	{
		Bureaucrat	bureaucrat("b1", 145);
		bureaucrat.incrGrade();
		std::cout << bureaucrat << "\n";
	}
	catch (const std::exception &ex)
	{
		std::cerr << ex.what() << "\n";
	}
	try
	{
		Bureaucrat	bureaucrat2("b2", 150);
		bureaucrat2.incrGrade();
		std::cout << bureaucrat2 << "\n";
	}
	catch (const std::exception &ex)
	{
		std::cerr << ex.what() << "\n";
	}
	try
	{
		Bureaucrat	bureaucrat3("b3", 1);
		bureaucrat3.decrGrade();
		std::cout << bureaucrat3 << "\n";
	}
	catch (const std::exception &ex)
	{
		std::cerr << ex.what() << "\n";
	}
	try
	{
		Bureaucrat	bureaucrat4("b4", 0);
		std::cout << bureaucrat4 << "\n";
	}
	catch (const std::exception &ex)
	{
		std::cerr << ex.what() << "\n";
	}
	try
	{
		Bureaucrat	bureaucrat5("b5", 151);
		std::cout << bureaucrat5 << "\n";
	}
	catch (const std::exception &ex)
	{
		std::cerr << ex.what() << "\n";
	}
}