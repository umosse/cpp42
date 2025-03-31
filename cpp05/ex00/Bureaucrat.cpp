#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade)
{
	_name = name;
	_grade = grade;
	if (_grade < 1)
	{
		throw (Bureaucrat::GradeTooHighException);
	}
	if (_grade > 150)
	{
		throw (Bureaucrat::GradeTooLowException);
	}
	std::cout << _name << " default constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		_name = other._name;
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

void Bureaucrat::operator<<(const Bureaucrat &other)
{
	std::cout << _name << ", bureaucrat grade " << _grade << std::endl;
}

std::string	const &Bureaucrat::getName()const
{
	return (_name);
}

int	&Bureaucrat::getGrade()
{
	return (_grade);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default destructor called" << std::endl;
}
