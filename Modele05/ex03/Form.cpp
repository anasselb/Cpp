//
// Created by Anass El bacha on 8/31/22.
//

#include "Form.hpp"


Form::Form() : _name("walo"),_is_signed(0),_gradeToSign(1),_gradeRequiredToExecute(1) {
    std::cout << "Form Default Constructor is Called" << std::endl;
}

Form::Form(std::string name, bool is_signed, int gradeToSign, int gradeRequiredToExecute) : _name(name),_is_signed(is_signed),_gradeToSign(gradeToSign),_gradeRequiredToExecute(gradeRequiredToExecute){
    std::cout << "Form Constructor is Called" << std::endl;
    if (gradeRequiredToExecute > 150 || gradeToSign > 150)
        throw GradeTooLowException();
    if (gradeRequiredToExecute < 1 || gradeToSign < 1)
        throw GradeTooHighException();
}

Form::Form(Form &copy) : _name(copy.getName()),_is_signed(copy.getIsSigned()),_gradeToSign(copy.getGradeToSign()),_gradeRequiredToExecute(copy.getGradeToExecute()) {
    std::cout << "Form Copy Constructor is Called" << std::endl;
}

Form& Form::operator=(Form &copy) {
    (void)copy;
    return *this;
}

void Form::beSigned(Bureaucrat &alim)
{
    if (alim.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    _is_signed = 1;
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Grade Tooo High";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Grade Too Low";
}

Form::~Form() {
    std::cout << "Form Destructor is Called" << std::endl;
}

std::string Form::getName() const { return _name;}
bool Form::getIsSigned() const { return _is_signed;}
int Form::getGradeToSign() const { return _gradeToSign;}
int Form::getGradeToExecute() const { return _gradeRequiredToExecute;}