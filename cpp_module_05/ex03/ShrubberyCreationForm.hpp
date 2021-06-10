#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>

# include "Form.hpp"

class ShrubberyCreationForm;

class ShrubberyCreationForm : public Form
{
    private:
        void        beExecuted() const;

    public:
        ShrubberyCreationForm(std::string const & target);
        ShrubberyCreationForm(const ShrubberyCreationForm&);
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm& op);

};


#endif