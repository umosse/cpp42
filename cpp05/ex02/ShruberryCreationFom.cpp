#include "ShruberryCreationForm.hpp"
#include "AForm.hpp"

ShruberryCreationForm::ShruberryCreationForm()
{
	std::cout << "Default constructor called" << std::endl;
}

ShruberryCreationForm::ShruberryCreationForm(const std::string &target)
{
	std::cout << getName() << " default constructor called" << std::endl;
}

ShruberryCreationForm &ShruberryCreationForm::operator=(const ShruberryCreationForm &other)
{
	if (this != &other)
	{
		setName(other.getName());
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

void	ShruberryCreationForm::execute(Bureaucrat const & executor)
{
	if (!getSigned())
	{
		FormNotSignedException	notsigned;
		throw (notsigned);
	}
	if (executor.getGrade() > 137)
	{
		GradeTooLowException	Low;
		throw (Low);
	}
	
}

ShruberryCreationForm::~ShruberryCreationForm()
{
	std::cout << "Default destructor called" << std::endl;
}
