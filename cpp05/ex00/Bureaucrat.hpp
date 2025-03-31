#pragma once

#include <iostream>

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(std::string const & _name, int	_grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();
		std::string	const	&getName()const;
		int	&getGrade();
		Bureaucrat&	operator=(const Bureaucrat &other);
		void	operator<<(const Bureaucrat &other);
		class GradeTooHighException {

		};
		class GradeTooLowException {

		};
	private:
		std::string	_name;
		int		_grade;
};
