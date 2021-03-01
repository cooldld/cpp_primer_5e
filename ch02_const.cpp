#include <iostream>

void test_2_26()
{
    /*error: uninitialized const ‘buf’ [-fpermissive]*/
    //const int buf;
    int cnt = 0;
    const int sz = cnt;
    ++cnt;
    /*error: increment of read-only variable ‘sz’*/
    //++sz;
}

void test_2_4_1()
{
    int i;
    const int &r1 = i;
    const int &r2 = 43;
    const int &r3 = r1 * 2;
    /*error: invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘int’*/
    //int &r4 = r1 * 2;
    //int &r5 = i * 2;

    double dval = 3.14;
    const int &ri = dval;
    std::cout << ri << std::endl;
}

int main()
{
    int i;

    std::cin >> i;
    const int ci = i;

    std::cout << i << std::endl;

    test_2_26();

    test_2_4_1();
    return 0;
}
