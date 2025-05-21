#ifndef PRESIDENTIALPARDONFORM_HPP

# define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class PresidentialPardonForm : public AForm {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &target, std::string const & _name, int _signGrade, int _execGrade);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		~PresidentialPardonForm();
		PresidentialPardonForm&	operator=(const PresidentialPardonForm &other);
		void	execute(Bureaucrat const & executor) const;
		std::string	getTarget()const;
	private:
		std::string	_target;
		int	_reqSign;
		int	_reqExec;
};

#endif