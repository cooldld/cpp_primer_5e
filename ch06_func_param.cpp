#include "using_std.h"

void eg()
{
    /*定义int常量*/
    const int ci = 42;

    /*定义int变量i，初始化用ci的值*/
    int i = ci;
    cout << "i = " << i << endl;
    int j = i;

    /*定义int指针p，p是常量，*p是变量*/
    int * const p = &i;
    /*不能改变p的值*/
    /*error: assignment of read-only variable ‘p’*/
    //p = &j;
    /*但是，可以改变指针p指向对象的值*/
    *p = 0;
    cout << "i = " << i << endl;

    /*定义int指针pi，pi是变量，*pi是常量*/
    const int * pi = &i;
    /*可以改变pi的值*/
    pi = &j;
    cout << "*pi = " << *pi << endl;
    /*但是，不能改变指针pi指向对象的值*/
    /*error: assignment of read-only location ‘* pi’*/
    //*pi = 0;
}

void eg2()
{
    int i = 42;

    /*cp是变量，*cp是常量*/
    const int *cp = &i;

    /*r是常量*/
    const int &r = i;

    /*r2是常量*/
    const int &r2 = 42;

    /*error，*p是变量，*cp是常量*/
    //int *p = cp;

    /*error，r3是变量，r是常量*/
    //int &r3 = r;

    /*error，r4是变量，42是常量*/
    //int &r4 = 42;
}

void reset1(int *pi)
{
}

void reset2(int &ri)
{
}

void eg3()
{
    int i = 0;
    const int ci = i;
    string::size_type s;

    reset1(&i);

    /*error: invalid conversion from ‘const int*’ to ‘int*’*/
    //reset1(&ci);

    reset2(i);

    /*error: invalid initialization of reference of type ‘int&’ from expression of type ‘const int’*/
    //reset2(ci);

    /*error: invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘int’*/
    //reset2(42);

    /*error: invalid initialization of reference of type ‘int&’ from expression of type ‘std::basic_string<char>::size_type {aka unsigned int}’*/
    //reset2(s);
}

int main()
{
    eg();

    eg2();

    return 0;
}
