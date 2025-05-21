#ifndef ROBOTOMYREQUESTFORM_HPP

# define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &target, std::string const & _name, int _signGrade, int _execGrade);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		~RobotomyRequestForm();
		RobotomyRequestForm&	operator=(const RobotomyRequestForm &other);
		void	execute(Bureaucrat const & executor) const;
		std::string	getTarget()const;
	private:
		std::string	_target;
		int	_reqSign;
		int	_reqExec;
};

#endif