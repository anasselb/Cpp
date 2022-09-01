//
// Created by Anass El bacha on 9/1/22.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("nothing",0,145,137) {
    std::cout << "Default ShrubberyCreationForm Constructor is Called" << std::endl;

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target) : Form(target,0,145,137) {
    std::cout << "ShrubberyCreationForm Constructor is Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy) : Form(copy.getName(),copy.getIsSigned(),copy.getGradeToSign(),copy.getGradeToExecute()) {
    std::cout << "ShrubberyCreationForm Copy Constructor is Called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &copy) {
    (void)copy;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm Destructor is Called" << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    std::string arr[10] = {"       _-_","    /~~   ~~\\"," /~~         ~~\\","{               }",
                    " \\  _-     -_  /","   ~  \\\\ //  ~","_- -   | | _- _","  _ -  | |   -_","      // \\\\"};
    if (executor.getGrade() > this->getGradeToExecute() || this->getIsSigned() == 0)
        throw Form::GradeTooLowException();
    std::ofstream file;
    file.open(this->getName() + "_shrubbery");
    if (file.is_open())
    {
        for(int i = 0; i < 9;i++)
            file << arr[i] << std::endl;
        file.close();
    }

}