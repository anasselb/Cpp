//
// Created by Anass El bacha on 8/30/22.
//

#include "Bureaucrat.h"


int Bureaucrat::getGrade() const { return _garde;}
std::string Bureaucrat::getName() const { return  _name;}

Bureaucrat::Bureaucrat(): _name("walo"), _garde(150) {
    std::cout << "Default Constructor is Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _garde(grade) {
    std::cout << "Constructor is Called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy) : _name(copy.getName()), _garde(copy.getGrade()){
    std::cout << "Copy Constructor is Called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &copy) {
    (void)copy;
    return *this;
}
Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor is Called" << std::endl;
}