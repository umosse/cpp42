#include "ShruberryCreationForm.hpp"
#include "AForm.hpp"
#include <fstream>

ShruberryCreationForm::ShruberryCreationForm(): AForm()
{
	std::cout << "Default constructor called" << std::endl;
}

ShruberryCreationForm::ShruberryCreationForm(const std::string &target, std::string const & _name, int _signGrade, int _execGrade): AForm(_name, _signGrade, _execGrade)
{
	_target = target;
	std::cout << getName() << " default constructor called" << std::endl;
}

ShruberryCreationForm &ShruberryCreationForm::operator=(const ShruberryCreationForm &other)
{
	if (this != &other)
	{
		setName(other.getName());
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

std::string	ShruberryCreationForm::getTarget() const
{
	return (_target);
}

void	ShruberryCreationForm::execute(Bureaucrat const & executor) const
{
	if (!getSigned())
	{
		FormNotSignedException	notsigned;
		throw (notsigned);
	}
	if (executor.getGrade() > 137)
	{
		GradeTooLowException	Low;
		throw (Low);
	}
	
	std::string	fileName = getTarget() + "_shruberry";
	std::ofstream	newFile(fileName.c_str());
	if (!newFile.is_open())
		std::cerr << "File was not opened correctly\n";
	else
	{
		std::string tree ="           _-_\n"
						"		/~~   ~~\\\n"
						"	 /~~         ~~\\\n"
						"	{               }\n"
						"	 \\  _-     -_  /\n"
						"	   ~  \\\\ //  ~\n"
						"	_- -   | | _- _\n"
						"	  _ -  | |   -_\n"
						"		  // \\\\\n";
		newFile << tree << "\n";
	}
}

ShruberryCreationForm::~ShruberryCreationForm()
{
	std::cout << "Default destructor called" << std::endl;
}
