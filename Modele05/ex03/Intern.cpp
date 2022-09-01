//
// Created by Anass El bacha on 9/1/22.
//

#include "Intern.hpp"


Intern::Intern()  {
    std::cout << "Default Intern Constructor is Called" << std::endl;

}

Intern::Intern(Intern &copy) {
    (void)copy;
    std::cout << "Intern Copy Constructor is Called" << std::endl;
}

Intern &Intern::operator=(Intern &copy) {
    (void)copy;
    return *this;
}

Intern::~Intern() {
    std::cout << "Intern Destructor is Called" << std::endl;
}

Form *Intern::makeForm(std::string FormName, std::string target) {
    std::string arr[3] = {"shrubbery creation", "robotomy request","presidential pardon"};
    int is = 5;
    Form *p = NULL;
    for (int i = 0;i < 3;i++)
        if (!FormName.compare(arr[i]))
            is = i;
    switch (is) {
        case 0:
            p = new ShrubberyCreationForm(target);
                    break;
        case 1:
            p = new RobotomyRequestForm(target);
                    break;
        case 2:
            p = new PresidentialPardonForm(target);
                    break;
        default:
            std::cout << "ERROR : Form doesn't exist" << std::endl;
            exit(1);
    }
    return (p);
}