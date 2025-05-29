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
	}

	{
		AForm*	form2 = new ShruberryCreationForm("target", "name", 150, 150);
		try
		{
			Bureaucrat	bureaucrat("b2", 1);
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

	{
		AForm*	form4 = new PresidentialPardonForm();
		try
		{
			Bureaucrat	bureaucrat("b3", 150);
			std::cout << bureaucrat << "\n";
			std::cout << *form4 << "\n";
			form4->beSigned(bureaucrat);
			bureaucrat.executeForm(*form4);
		}
		catch (const std::exception &ex)
		{
			std::cerr << ex.what() << "\n";
		}
		delete form4;
		std::cout << "END\n\n\n";
	}

	{
		AForm*	form5 = new ShruberryCreationForm();
		try
		{
			Bureaucrat	bureaucrat("b3", 150);
			std::cout << bureaucrat << "\n";
			std::cout << *form5 << "\n";
			form5->beSigned(bureaucrat);
			bureaucrat.executeForm(*form5);
		}
		catch (const std::exception &ex)
		{
			std::cerr << ex.what() << "\n";
		}
		delete form5;
		std::cout << "END\n\n\n";
	}

	{
		AForm*	form6 = new RobotomyRequestForm();
		try
		{
			Bureaucrat	bureaucrat("b3", 150);
			std::cout << bureaucrat << "\n";
			std::cout << *form6 << "\n";
			form6->beSigned(bureaucrat);
			bureaucrat.executeForm(*form6);
		}
		catch (const std::exception &ex)
		{
			std::cerr << ex.what() << "\n";
		}
		delete form6;
		std::cout << "END\n\n\n";
	}


	{
		AForm*	form7 = new PresidentialPardonForm("target", "name", 100, 100);
		try
		{
			Bureaucrat	bureaucrat("b3", 150);
			std::cout << bureaucrat << "\n";
			std::cout << *form7 << "\n";
			form7->beSigned(bureaucrat);
			bureaucrat.executeForm(*form7);
		}
		catch (const std::exception &ex)
		{
			std::cerr << ex.what() << "\n";
		}
		delete form7;
		std::cout << "END\n\n\n";
	}
}