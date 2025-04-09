#ifndef FORM_HPP

# define FORM_HPP

#include <exception>
#include <iostream>
class Bureaucrat;

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
		void	beSigned(Bureaucrat& bureaucrat);
		Form&	operator=(const Form &other);
		class GradeTooHighException : public std::exception {
			public:
				GradeTooHighException();
				virtual const char * what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				GradeTooLowException();
				GradeTooLowException(const std::string& type);
				virtual const char * what() const throw();
				virtual ~GradeTooLowException() throw();
			private:
				std::string	_message;
		};
		private:
		std::string	_name;
		bool		_signed;
		int			_signGrade;
		int			_execGrade;
	};
	
std::ostream &operator<<(std::ostream &oss, const Form &form);

#endif