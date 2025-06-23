#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <cstdlib>
#include <ctime>
#include <exception>

int	main()
{
	srand(time(0));
	{
		AForm *form = NULL;
		try {
			Intern	i1;
			form = i1.makeForm("Shruberry Form", "target");
			Bureaucrat	bureaucrat("b1", 1);
			std::cout << bureaucrat << "\n";
			std::cout << *form << "\n";
			form->beSigned(bureaucrat);
			bureaucrat.executeForm(*form);
		} catch (std::exception &ex) {
			std::cout << ex.what() << "\n";
		}
		if (form)
			delete form;
	}
	std::cout << "\n\n\n";
	{
		AForm *form = NULL;
		try {
			Intern	i2;
			form = i2.makeForm("Robotomy Form", "target");
			Bureaucrat	bureaucrat("b2", 1);
			std::cout << bureaucrat << "\n";
			std::cout << *form << "\n";
			form->beSigned(bureaucrat);
			bureaucrat.executeForm(*form);
		} catch (std::exception &ex) {
			std::cout << ex.what() << "\n";
		}
		if (form)
			delete form;
	}
	std::cout << "\n\n\n";
	{
		AForm *form = NULL;
		try {
			Intern	i3;
			form = i3.makeForm("Presidential Form", "target");
			Bureaucrat	bureaucrat("b3", 1);
			std::cout << bureaucrat << "\n";
			std::cout << *form << "\n";
			form->beSigned(bureaucrat);
			bureaucrat.executeForm(*form);
		} catch (std::exception &ex) {
			std::cout << ex.what() << "\n";
		}
		if (form)
			delete form;
	}
	std::cout << "\n\n\n";
	{
		AForm *form = NULL;
		try {
			Intern	i4;
			form = i4.makeForm("Presidential Form", "target");
			Bureaucrat	bureaucrat("b4", 150);
			std::cout << bureaucrat << "\n";
			std::cout << *form << "\n";
			form->beSigned(bureaucrat);
			bureaucrat.executeForm(*form);
		} catch (std::exception &ex) {
			std::cout << ex.what() << "\n";
		}
		if (form)
			delete form;
	}
	std::cout << "\n\n\n";
	{
		AForm *form = NULL;
		try {
			Intern	i5;
			form = i5.makeForm("Random fake form", "target");
			Bureaucrat	bureaucrat("b5", 1);
			std::cout << bureaucrat << "\n";
			std::cout << *form << "\n";
			form->beSigned(bureaucrat);
			bureaucrat.executeForm(*form);
		} catch (std::exception &ex) {
			std::cout << ex.what() << "\n";
		}
		if (form)
			delete form;
	}
}