#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): _name("default"), _signed(false), _signGrade(150), _execGrade(150)
{
	std::cout << "Default constructor called" << std::endl;
}

AForm::AForm(std::string const & name, int signGrade, int execGrade): _signed(false)
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

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
	{
		_name = other._name;
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

std::ostream &operator<<(std::ostream &oss, const AForm &AForm)
{
	oss << AForm.getName() << ", Aform grade to sign " << AForm.getSignGrade() << ", Aform grade to execute " << AForm.getExecGrade();
	return (oss);
}

std::string	const &AForm::getName()const
{
	return (_name);
}

void	AForm::setName(const std::string &name)
{
	_name = name;
}

int	AForm::getSignGrade()const
{
	return (_signGrade);
}

int	AForm::getExecGrade()const
{
	return (_execGrade);
}

bool	AForm::getSigned()const
{
	return (_signed);
}

AForm::GradeTooHighException::GradeTooHighException()
{
}

AForm::GradeTooLowException::GradeTooLowException()
{
	_message = "The grade is too low";
}

AForm::GradeTooLowException::~GradeTooLowException() throw()
{
}

AForm::GradeTooLowException::GradeTooLowException(const std::string& message)
{
	_message = message;
}

AForm::FormNotSignedException::FormNotSignedException()
{
}

void	AForm::beSigned(Bureaucrat &bureaucrat)
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

const char * AForm::GradeTooHighException:: what() const throw()
{
	return ("The grade is too high");
}

const char * AForm::GradeTooLowException:: what() const throw()
{
	return (_message.c_str());
}

const char * AForm::FormNotSignedException:: what() const throw()
{
	return ("Form was not signed");
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}
