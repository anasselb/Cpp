//
// Created by Anass El bacha on 8/30/22.
//

#include "Bureaucrat.h"


int Bureaucrat::getGrade() const { return _grade;}
std::string Bureaucrat::getName() const { return  _name;}

Bureaucrat::Bureaucrat(): _name("walo"), _grade(150) {
    std::cout << "Default Constructor is Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    std::cout << "Constructor is Called" << std::endl;
    if (grade > 150)
        throw (GradeTooLowException());
    if (grade <= 0)
        throw (GradeTooHighException());
}

Bureaucrat::Bureaucrat(Bureaucrat &copy) : _name(copy.getName()), _grade(copy.getGrade()){
    std::cout << "Copy Constructor is Called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &copy) {
    _grade = copy.getGrade();
    return *this;
}
Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor is Called" << std::endl;
}

void Bureaucrat::increment() {
    if (_grade - 1 <= 0)
        throw (GradeTooHighException());
    _grade -= 1;
}

void Bureaucrat::decrement() {
    if (_grade + 1 > 150)
        throw (GradeTooLowException());
    _grade += 1;
}

void Bureaucrat::signedForm(Form& form)
{
    if (form.getIsSigned())
        std::cout << _name << " signed " << form.getName() << std::endl;
    else
        std::cout << _name << " couldn't sign  " << form.getName() << " because " << "Grade Too Low" << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade Tooo High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade Too Low";
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat& copy)
{
    out << copy.getName() << ", bureaucrat grade " << copy.getGrade() ;
    return out;
}
