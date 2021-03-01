#include <iostream>

int main()
{
    int i = 42;
    int *p;
    int *&r = p;

    r = &i;
    std::cout << "p = " << p << std::endl;
    std::cout << "*p = " << *p << std::endl;

    return 0;
}
