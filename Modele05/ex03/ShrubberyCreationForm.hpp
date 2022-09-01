//
// Created by Anass El bacha on 9/1/22.
//

#ifndef C_SHRUBBERYCREATIONFORM_HPP
#define C_SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string &target);
    ShrubberyCreationForm(ShrubberyCreationForm &copy);
    ShrubberyCreationForm& operator=(ShrubberyCreationForm &copy);
    ~ShrubberyCreationForm();

    void execute(Bureaucrat const & executor) const;
};


#endif //C_SHRUBBERYCREATIONFORM_HPP
