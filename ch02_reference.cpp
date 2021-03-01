#include <iostream>

void test1(void)
{
    /*error: invalid initialization of non-const reference of type ‘int&’*/
    //int &r2 = &ri;

    int ival = 1.01;

    /*error: invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘double’*/
    //int &rval1 = 1.01;

    int &rval2 = ival;

    /*error: ‘rval3’ declared as reference but not initialized*/
    //int &rval3;
}

void test2(void)
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    r2 = 3.14159;
    r2 = r1;
    i = r2;
    r1 = d;
}

int main()
{
    int i, &ri = i;
    i = 5;
    ri = 10;
    std::cout << i << " " << ri << std::endl;

    test1();

    test2();

    return 0;
}
