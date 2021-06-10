#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target)
:
Form("ShrubberyCreationForm", 145, 137, target)	
{
    
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
:
Form(copy)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm() 
{

}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm& op)
{
	if (this == &op)
		return (*this); 
	Form::operator=(op);
	return (*this);
}


void					ShrubberyCreationForm::beExecuted() const
{
	std::ofstream file;

	file.open(std::string(this->getTarget() + "_shrubbery").c_str(),
		std::ios::out | std::ios::app);
	if(file.is_open())
	{
	    file << " * "<< std::endl;
        file << " *** "<< std::endl;
        file << " ***** "<< std::endl;
        file << " ******* "<< std::endl;
        file << " ********* "<< std::endl;
        file << " ***** "<< std::endl;
        file << " ******* "<< std::endl;
        file << " ********* "<< std::endl;
        file << " *********** "<< std::endl;
        file << " ************* "<< std::endl;
        file << " *************** "<< std::endl;
        file << " *********** "<< std::endl;
        file << " ************* "<< std::endl;
        file << " *************** "<< std::endl;
        file << " ***************** "<< std::endl;
        file << " ******************* "<< std::endl;
        file << " ********************* "<< std::endl;
        file << " *** "<< std::endl;
        file << " *** "<< std::endl;
        file << " *** "<< std::endl;
        file << " *** "<< std::endl;
		file.close();
	}
}
