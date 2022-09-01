//
// Created by Anass El bacha on 9/1/22.
//

#ifndef C_ROBOTOMYREQUESTFORM_HPP
#define C_ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"


class RobotomyRequestForm : public Form {
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string &target);
    RobotomyRequestForm(RobotomyRequestForm &copy);
    RobotomyRequestForm& operator=(RobotomyRequestForm &copy);
    ~RobotomyRequestForm();

    void execute(Bureaucrat const & executor) const;
};

#endif //C_ROBOTOMYREQUESTFORM_HPP
