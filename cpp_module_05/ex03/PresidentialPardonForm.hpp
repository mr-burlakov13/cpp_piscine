#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <cstdlib>

# include "Form.hpp"

class PresidentialPardonForm;

class PresidentialPardonForm : public Form
{
    private:
        void        beExecuted() const;
        PresidentialPardonForm();

	    std::string const m_target;

    public:
        PresidentialPardonForm(std::string const & target);
        PresidentialPardonForm(const PresidentialPardonForm&);
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(const PresidentialPardonForm& op);

        void execute(Bureaucrat const &executor) const;

	    static Form *generate(std::string const &target);

};


#endif