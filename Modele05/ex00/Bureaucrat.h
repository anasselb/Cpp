//
// Created by Anass El bacha on 8/30/22.
//

#ifndef C_BUREAUCRAT_H
#define C_BUREAUCRAT_H
#include <string>
#include <iostream>


class Bureaucrat {
    const std::string _name;
    int   _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat &copy);
    Bureaucrat& operator=(Bureaucrat &copy);
    ~Bureaucrat();

    void    increment();
    void    decrement();

    std::string getName( void ) const;
    int getGrade( void ) const;


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

std::ostream& operator<<(std::ostream &out, const Bureaucrat& copy);

#endif //C_BUREAUCRAT_H
