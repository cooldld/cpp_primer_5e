#include <iostream>

int main()
{
    /*error: expected primary-expression before ‘int’*/
    //std::cin >> int input_value;

    /*error: expected unqualified-id before ‘int’*/
    //int a = 1, int b = 2;

    int i = { 3.14 };

    /*error: ‘wage’ was not declared in this scope*/
    //double salary = wage = 9999.99;

    int a = 3.14;

    int b;

    a = b;
    std::cout << a;

    return 0;
}
