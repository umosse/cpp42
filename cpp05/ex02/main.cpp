#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>
#include <exception>

int	main()
{
	srand(time(0));

	AForm*	form = new PresidentialPardonForm();
	try
	{
		Bureaucrat	bureaucrat("b1", 110);
		std::cout << bureaucrat << "\n";
		std::cout << form << "\n";
		form->beSigned(bureaucrat);
		bureaucrat.executeForm(*form);
	}
	catch (const std::exception &ex)
	{
		std::cerr << ex.what() << "\n";
	}
	delete form;

}