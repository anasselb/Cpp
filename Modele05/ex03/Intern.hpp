//
// Created by Anass El bacha on 9/1/22.
//

#ifndef C_INTERN_HPP
#define C_INTERN_HPP
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
public:
    Intern();
    Intern(Intern &copy);
    Intern& operator=(Intern &copy);
    ~Intern();

    Form* makeForm(std::string FormName, std::string target);
};

#endif //C_INTERN_HPP
