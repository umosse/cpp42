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
		GradeTooLowException	Low;
		throw (Low);
	}
	if (_grade > 150)
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
		_name = other._name;
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

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	std::cout << "other Default constructor called" << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	std::cout << "Default constructor called" << std::endl;
}

const char * Bureaucrat::GradeTooHighException:: what() const throw()
{
	return ("Too high");
}

const char * Bureaucrat::GradeTooLowException:: what() const throw()
{
	return ("Too low");
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default destructor called" << std::endl;
}
