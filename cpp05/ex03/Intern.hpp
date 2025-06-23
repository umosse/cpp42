#ifndef INTERN_HPP

# define INTERN_HPP

#include "AForm.hpp"

typedef AForm *(*createForm)(std::string &target);

struct forms{
	std::string	name;
	createForm	form;
};

class Intern {
	public:
		Intern();
		Intern(const Intern &other);
		~Intern();
		Intern &operator=(const Intern &other);
		AForm	*makeForm(std::string form, std::string target);
	private:
};

#endif