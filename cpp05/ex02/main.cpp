#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShruberryCreationForm.hpp"
#include <cstdlib>
#include <ctime>
#include <exception>

int	main()
{
	srand(time(0));
	{
		AForm*	form = new PresidentialPardonForm();
		try
		{
			Bureaucrat	bureaucrat("b1", 1);
			std::cout << bureaucrat << "\n";
			std::cout << *form << "\n";
			form->beSigned(bureaucrat);
			bureaucrat.executeForm(*form);
		}
		catch (const std::exception &ex)
		{
			std::cerr << ex.what() << "\n";
		}
		delete form;
		std::cout << "END\n\n\n";
		/////////////////////////////////////////////////////////////
	}

	{
		AForm*	form2 = new ShruberryCreationForm();
		try
		{
			Bureaucrat	bureaucrat("b2", 110);
			std::cout << bureaucrat << "\n";
			std::cout << *form2 << "\n";
			form2->beSigned(bureaucrat);
			bureaucrat.executeForm(*form2);
		}
		catch (const std::exception &ex)
		{
			std::cerr << ex.what() << "\n";
		}
		delete form2;
		std::cout << "END\n\n\n";
		/////////////////////////////////////////////////////////////
	}

	{
		AForm*	form3 = new RobotomyRequestForm();
		try
		{
			Bureaucrat	bureaucrat("b3", 1);
			std::cout << bureaucrat << "\n";
			std::cout << *form3 << "\n";
			form3->beSigned(bureaucrat);
			bureaucrat.executeForm(*form3);
		}
		catch (const std::exception &ex)
		{
			std::cerr << ex.what() << "\n";
		}
		delete form3;
		std::cout << "END\n\n\n";
	}

}