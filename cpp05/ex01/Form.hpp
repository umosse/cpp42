#pragma once

#include "Bureaucrat.hpp"

class Form {
	public:
		Form();
		Form(std::string const & _name, int	_signGrade, int _execGrade);
		Form(const Form &other);
		~Form();
		std::string	const	&getName()const;
		bool	getSigned() const;
		int	getSignGrade() const;
		int	getExecGrade() const;
		void	beSigned(Bureaucrat);
		Form&	operator=(const Form &other);
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
		bool		_signed;
		int			_signGrade;
		int			_execGrade;
	};
	
std::ostream &operator<<(std::ostream &oss, const Bureaucrat &bureaucrat);