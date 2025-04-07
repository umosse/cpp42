#include "Form.hpp"

Form::Form()
{
	std::cout << "Default constructor called" << std::endl;
}

Form::Form(std::string const & name, int signGrade, int execGrade)
{
	_name = name;
	_signGrade = signGrade;
	_execGrade = execGrade;
	if (_signGrade < 1 || _execGrade < 1)
	{
		GradeTooLowException	Low;
		throw (Low);
	}
	if (_signGrade > 150 || _execGrade > 150)
	{
		GradeTooHighException	High;
		throw (High);
	}
	std::cout << _name << " default constructor called" << std::endl;
}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
	{
		_name = other._name;
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

std::ostream &operator<<(std::ostream &oss, const Form &Form)
{
	oss << Form.getName() << ", Form grade " << Form.getGrade();
	return (oss);
}

std::string	const &Form::getName()const
{
	return (_name);
}

int	Form::getSignGrade()const
{
	return (_signGrade);
}

int	Form::getExecGrade()const
{
	return (_execGrade);
}

bool	Form::getSigned()const
{
	return (_signed);
}

Form::GradeTooHighException::GradeTooHighException()
{
	std::cout << "Too high constructor called" << std::endl;
}

Form::GradeTooLowException::GradeTooLowException()
{
	std::cout << "Too low constructor called" << std::endl;
}

const char * Form::GradeTooHighException:: what() const throw()
{
	return ("The grade is too high");
}

const char * Form::GradeTooLowException:: what() const throw()
{
	return ("The grade is too low");
}

Form::~Form()
{
	std::cout << "Default destructor called" << std::endl;
}
