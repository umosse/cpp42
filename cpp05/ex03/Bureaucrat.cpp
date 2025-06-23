#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name)
{
	_grade = grade;
	if (_grade > 150)
	{
		GradeTooLowException	Low;
		throw (Low);
	}
	if (_grade < 1)
	{
		GradeTooHighException	High;
		throw (High);
	}
	std::cout << _name << " default constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		_grade = other._grade;
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

std::ostream &operator<<(std::ostream &oss, const Bureaucrat &bureaucrat)
{
	oss << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (oss);
}

std::string	const &Bureaucrat::getName()const
{
	return (_name);
}

int	Bureaucrat::getGrade()const
{
	return (_grade);
}

void	Bureaucrat::incrGrade()
{
	_grade--;
	if (_grade > 150)
	{
		GradeTooLowException	Low;
		throw (Low);
	}
	if (_grade < 1)
	{
		GradeTooHighException	High;
		throw (High);
	}
}

void	Bureaucrat::decrGrade()
{
	_grade++;
	if (_grade > 150)
	{
		GradeTooLowException	Low;
		throw (Low);
	}
	if (_grade < 1)
	{
		GradeTooHighException	High;
		throw (High);
	}
}

void	Bureaucrat::signForm(AForm &form)
{
	form.beSigned(*this);
}

void	Bureaucrat::executeForm(AForm const & form)
{
	form.execute(*this);
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	std::cout << "Grade too high constructor called" << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	std::cout << "Grade too low constructor called" << std::endl;
}

Bureaucrat::FormNotSignedException::FormNotSignedException()
{
	std::cout << "Form not signed constructor called" << std::endl;
}

const char * Bureaucrat::GradeTooHighException:: what() const throw()
{
	return ("Grade is too high");
}

const char * Bureaucrat::GradeTooLowException:: what() const throw()
{
	return ("Grade is too low");
}

const char * Bureaucrat::FormNotSignedException:: what() const throw()
{
	return ("Form was not signed");
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default destructor called" << std::endl;
}
