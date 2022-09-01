//
// Created by Anass El bacha on 8/31/22.
//

#ifndef C_FORM_HPP
#define C_FORM_HPP
#include <iostream>
#include <string>
#include "Bureaucrat.h"

class Bureaucrat;

class Form {
private:
    const std::string _name;
    bool  _is_signed;
    const int _gradeToSign;
    const int _gradeRequiredToExecute;
public:
    Form();
    Form(std::string name,bool is_signed, int gradeToSign,int gradeRequiredToExecute);
    Form(Form &copy);
    Form& operator=(Form& copy);
    ~Form();

    std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    void beSigned(Bureaucrat &alim);

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what () const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what () const throw();
    };
};


#endif //C_FORM_HPP
