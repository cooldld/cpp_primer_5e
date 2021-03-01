#include <iostream>

int main()
{
    bool b = 42;
    std::cout << "b = " << b << std::endl;

    int i = b;
    std::cout << "i = " << i << std::endl;
    i = 3.14;
    std::cout << "i = " << i << std::endl;

    double pi = i;
    std::cout << "pi = " << pi << std::endl;

    unsigned char c = -1;
    std::cout << "c = " << (int)c << std::endl;

    /*warning: overflow in implicit constant conversion [-Woverflow]*/
    signed char c2 = 256;
    std::cout << "c2 = " << (int)c2 << std::endl;

    return 0;
}
