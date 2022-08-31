//
// Created by Anass El bacha on 8/30/22.
//

#ifndef C_BUREAUCRAT_H
#define C_BUREAUCRAT_H
#include <string>
#include <iostream>

class Bureaucrat {
    const std::string _name;
    int   _garde;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat &copy);
    Bureaucrat& operator=(Bureaucrat &copy);
    ~Bureaucrat();

    std::string getName( void ) const;
    int getGrade( void ) const;
};


#endif //C_BUREAUCRAT_H
