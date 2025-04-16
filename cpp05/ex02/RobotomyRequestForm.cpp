#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout << "Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
{
	std::cout << getName() << " default constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		setName(other.getName());
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	if (!getSigned())
	{
		FormNotSignedException	notsigned;
		throw (notsigned);
	}
	if (executor.getGrade() > 45)
	{
		GradeTooLowException	Low;
		throw (Low);
	}
	std::cout << "Brrrrrrrrrrrrrrrrrrrrrrrrrrrvvvvvvvvvvvrrrrrrr\n";

	const int	randomNum = std::rand();
	if (randomNum % 2)
	{
		std::cout << _target << " has been robotomized successfully\n";
	}
	else
		std::cout << "The robotomy has failed miserably\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Default destructor called" << std::endl;
}
