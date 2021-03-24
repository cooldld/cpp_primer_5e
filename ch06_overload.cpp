#include "using_std.h"

void print(const char *cp)
{
    cout << "void print(const char *cp)" << endl;
    cout << cp << endl;
}

/*error: ambiguates old declaration ‘void print(const char*)’*/
//int print(const char *cp);
int print();

void print(const int *beg, const int *end)
{
    cout << "void print(const int *beg, const int *end)" << endl;
    while (beg < end)
        cout << *beg++ << endl;
}

void print(const int ia[], size_t size)
{
    cout << "void print(const int ia[], size_t size)" << endl;
    for (size_t i = 0; i < size; i++)
        cout << ia[i] << endl;
}

void f()
{
    cout << "void f()" << endl;
}

void f(int x)
{
    cout << "void f(int x)" << endl;
}

void f(int x = 1);

int main()
{
    int j[5] = {5, 4, 3, 2, 1};
    int i[5] = {5, 4, 3, 2, 1};
    print("hello");
    print(begin(j), end(j));
    print(j, end(j) - begin(j));

    /*error: call of overloaded ‘f()’ is ambiguous*/
    //f();

    int *p = j;
    int *&rp = p;

    *rp = 50;
    print(begin(j), end(j));

    rp = i;
    cout << "*p = " << *p << endl;

    return 0;
}
