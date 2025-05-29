#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
{
	std::cout << "Default constructor called" << std::endl;
}

Form::Form(std::string const & name, int signGrade, int execGrade): _signed(false)
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
	oss << Form.getName() << ", form grade to sign " << Form.getSignGrade() << ", form grade to execute " << Form.getExecGrade();
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
}

Form::GradeTooLowException::GradeTooLowException()
{
	_message = "The grade is too low";
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
}

Form::GradeTooLowException::GradeTooLowException(const std::string& message)
{
	_message = message;
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _signGrade)
	{
		_signed = true;
		std::cout << bureaucrat.getName() << " signed " << _name << "\n";
	}
	else
	{
		GradeTooLowException	Low(bureaucrat.getName() + " couldn't sign " + _name + " because the bureaucrat's grade was too low.");
		throw (Low);
	}
}

const char * Form::GradeTooHighException:: what() const throw()
{
	return ("The grade is too high");
}

const char * Form::GradeTooLowException:: what() const throw()
{
	return (_message.c_str());
}

Form::~Form()
{
	std::cout << "Default destructor called" << std::endl;
}
