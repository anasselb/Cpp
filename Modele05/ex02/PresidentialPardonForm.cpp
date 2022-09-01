//
// Created by Anass El bacha on 9/1/22.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("nothing",0,25,5) {
    std::cout << "Default PresidentialPardonForm Constructor is Called" << std::endl;

}

PresidentialPardonForm::PresidentialPardonForm(std::string &target) : Form(target,0,25,5) {
    std::cout << "PresidentialPardonForm Constructor is Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy) : Form(copy.getName(),copy.getIsSigned(),copy.getGradeToSign(),copy.getGradeToExecute()) {
    std::cout << "PresidentialPardonForm Copy Constructor is Called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &copy) {
    (void)copy;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm Destructor is Called" << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    if (executor.getGrade() > this->getGradeToExecute() || this->getIsSigned() == 0)
        throw Form::GradeTooLowException();
    std::cout << getName() << " has been pardoned by Zaphod Beeblebrox " << std::endl;
}