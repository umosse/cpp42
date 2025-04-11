#ifndef PRESIDENTIALPARDONFORM_HPP

# define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const &target);
		~PresidentialPardonForm();
	private:
		std::string	_target;
		int	_reqSign;
		int	_reqExec;
};

#endif