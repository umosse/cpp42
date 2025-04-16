#ifndef SHRUBERRYCREATIONFORM_HPP

# define SHRUBERRYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class ShruberryCreationForm : public AForm {
	public:
		ShruberryCreationForm();
		ShruberryCreationForm(const std::string &target);
		ShruberryCreationForm(const ShruberryCreationForm &other);
		~ShruberryCreationForm();
		ShruberryCreationForm&	operator=(const ShruberryCreationForm &other);
		void	execute(Bureaucrat const & executor);
		std::string	getTarget()const;
	private:
		std::string	_target;
		int	_reqSign;
		int	_reqExec;
};

#endif