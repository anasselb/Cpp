

#include "ABC.hpp"

Base * generate(void)
{
    srand(time(NULL));
    int randNum = (rand() % 3) + 1;
    switch (randNum) {
        case 1:
            return new A();
        case 2:
            return new B();
        case 3:
            return new C();
    }
    return NULL;
}


void identify(Base* p)
{
    A *a;
    B *b;
    C *c;

    a = dynamic_cast<A*>(p);
    if (a)
        std::cout << "From Pointers type is A" << std::endl;
    b = dynamic_cast<B*>(p);
    if (b)
        std::cout << "From Pointers type is B" << std::endl;
    c = dynamic_cast<C*>(p);
    if (c)
        std::cout << "From Pointers type is C" << std::endl;
}

void identify(Base& p)
{
    try {
        A &a = dynamic_cast<A&>(p);
        std::cout << "From Reference type is A" << std::endl;
        (void)a;
    }
    catch (std::exception &e){}
    try {
       B &b = dynamic_cast<B&>(p);
        std::cout << "From Reference type is B" << std::endl;
        (void)b;
    }
    catch (std::exception &e){}
    try{
        C &c = dynamic_cast<C&>(p);
        std::cout << "From Reference type is C" << std::endl;
        (void)c;

    }
    catch (std::exception &e){}
}

int main()
{
    Base *base = generate();
    if (base)
        identify(base);

    B a1;
    Base &base1 = a1;
    identify(base1);
    delete base;
}