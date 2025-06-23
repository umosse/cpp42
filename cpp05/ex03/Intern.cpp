#include "Intern.hpp"
#include "AForm.hpp"
#include "ShruberryCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <cstddef>
#include <stdexcept>

Intern::Intern()
{
	std::cout << "Default constructor called" << std::endl;
}

Intern::Intern(const Intern &other)
{
	(void)other;
	std::cout << "Copy constructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

AForm	*MakeShruberry(std::string &target)
{
	return new ShruberryCreationForm(target);
}

AForm	*MakeRobotomy(std::string &target)
{
	return new RobotomyRequestForm(target);
}

AForm	*MakePresidential(std::string &target)
{
	return new PresidentialPardonForm(target);
}

static forms formList[] = {
	{"Shruberry Form", MakeShruberry},
	{"Robotomy Form", MakeRobotomy},
	{"Presidential Form", MakePresidential}
};

AForm *Intern::makeForm(std::string form, std::string target)
{
	for (size_t i = 0; i < 3; i++)
	{
		if (form == formList[i].name)
			return formList[i].form(target);
	}
	throw std::runtime_error("Form not found");
}

Intern::~Intern()
{
	std::cout << "Default destructor called" << std::endl;
}
