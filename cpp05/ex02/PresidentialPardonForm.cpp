#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm()
{
	std::cout << "Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm("PresidentialPardonForm", 25, 5)
{
	_target = target;
	std::cout << getName() << " default constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
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
