#ifndef ROBOTOMYREQUESTFORM_HPP
# define RobotomyRequestForm_HPP

# include <cstdlib>
# include "Form.hpp"

class RobotomyRequestForm;

class RobotomyRequestForm : public Form
{
    private:
        void        beExecuted() const;

    public:
        RobotomyRequestForm(std::string const & target);
        RobotomyRequestForm(const RobotomyRequestForm&);
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(const RobotomyRequestForm& op);


};

#endif