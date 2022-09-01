//
// Created by Anass El bacha on 9/1/22.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("nothing",0,72,45) {
    std::cout << "Default RobotomyRequestForm Constructor is Called" << std::endl;

}

RobotomyRequestForm::RobotomyRequestForm(std::string &target) : Form(target,0,72,45) {
    std::cout << "RobotomyRequestForm Constructor is Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy) : Form(copy.getName(),copy.getIsSigned(),copy.getGradeToSign(),copy.getGradeToExecute()) {
    std::cout << "RobotomyRequestForm Copy Constructor is Called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &copy) {
    (void)copy;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm Destructor is Called" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    if (executor.getGrade() > this->getGradeToExecute() || this->getIsSigned() == 0)
        throw Form::GradeTooLowException();
    srand(time(NULL));
    int nbr = rand();
    if (nbr % 2 == 0)
        std::cout << getName() << " has been robotomized successfully " << std::endl;
    else
        std::cout << getName() << " robotomy failed " << std::endl;
}