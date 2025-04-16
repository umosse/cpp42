#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	std::cout << "Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
{
	std::cout << getName() << " default constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
	{
		setName(other.getName());
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	if (!getSigned())
	{
		FormNotSignedException	notsigned;
		throw (notsigned);
	}
	if (executor.getGrade() > 5)
	{
		GradeTooLowException	Low;
		throw (Low);
	}
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Default destructor called" << std::endl;
}
