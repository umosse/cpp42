#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

#include "AForm.hpp"

class Form;

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(std::string const & _name, int	_grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();
		std::string	const	&getName()const;
		int	getGrade() const;
		void	incrGrade();
		void	decrGrade();
		void	signForm(AForm& form);
		void	executeForm(AForm);
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
		class FormNotSignedException : public std::exception {
			public:
			FormNotSignedException();
			virtual const char * what() const throw();
		};
		private:
		std::string	_name;
		int			_grade;
	};
	
std::ostream &operator<<(std::ostream &oss, const Bureaucrat &bureaucrat);

#endif