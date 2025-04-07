#pragma once

#include <exception>
#include <iostream>

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(std::string const & _name, int	_grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();
		std::string	const	&getName()const;
		int	getGrade() const;
		Bureaucrat&	operator=(const Bureaucrat &other);
		class GradeTooHighException : public std::exception {
			public:
			GradeTooHighException();
			virtual const char * what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
			GradeTooLowException();
			virtual const char * what() const throw();
		};
		private:
		std::string	_name;
		int			_grade;
	};
	
std::ostream &operator<<(std::ostream &oss, const Bureaucrat &bureaucrat);