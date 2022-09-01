//
// Created by Anass El bacha on 9/1/22.
//

#ifndef C_PRESIDENTIALPARDONFORM_HPP
#define C_PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string &target);
    PresidentialPardonForm(PresidentialPardonForm &copy);
    PresidentialPardonForm& operator=(PresidentialPardonForm &copy);
    ~PresidentialPardonForm();

    void execute(Bureaucrat const & executor) const;
};

#endif //C_PRESIDENTIALPARDONFORM_HPP
