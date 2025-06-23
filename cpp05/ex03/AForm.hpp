#ifndef AFORM_HPP

# define AFORM_HPP

#include <exception>
#include <iostream>
class Bureaucrat;

class AForm {
	public:
		AForm();
		AForm(std::string const & _name, int _signGrade, int _execGrade);
		AForm(const AForm &other);
		virtual ~AForm();
		std::string	const	&getName()const;
		bool	getSigned() const;
		int	getSignGrade() const;
		int	getExecGrade() const;
		void	beSigned(Bureaucrat& bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const = 0;
		AForm&	operator=(const AForm &other);
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
		class FormNotSignedException : public std::exception {
			public:
			FormNotSignedException();
			virtual const char * what() const throw();
		};
		private:
		const std::string	_name;
		bool		_signed;
		const int			_signGrade;
		const int			_execGrade;
	};

std::ostream &operator<<(std::ostream &oss, const AForm &form);

#endif