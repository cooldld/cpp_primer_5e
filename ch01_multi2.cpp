#include <iostream>

int main()
{
    std::cout << "Enter two numbers:";
    std::cout << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1;
    std::cin >> v2;
#if 1
    std::cout << "The result of ";
    std::cout << v1;
    std::cout << " * ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 * v2;
    std::cout << std::endl;
#else
    std::cout << "The result of ";
    /*error: expected primary-expression before ‘<<’ token*/
    << v1;
    << " * ";
    << v2;
    << " is ";
    << v1 * v2;
    << std::endl;
#endif
    return 0;
}
