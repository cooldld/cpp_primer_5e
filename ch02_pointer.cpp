#include <iostream>

int main()
{
    int i = 42;
    int *p = &i;
    int &ri = *p;
    int *pr = &ri;

    i = 11;
    std::cout << i << std::endl;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    std::cout << ri << std::endl;
    *p = 21;

    int j = 15;
    p = &j;
    std::cout << i << std::endl;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    std::cout << ri << std::endl;

    p = &ri;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;

    /*null pointer*/
    int *p1 = nullptr;
    int *p2 = 0;
    int *p3 = NULL;

    int **pi = &p;

    return 0;
}
