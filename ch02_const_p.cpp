#include <iostream>

void test_2_27()
{
    /*error: invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘int’*/
    //int i = -1, &r = 0;

    int i2;
    int const i3 = 0;

    int *const p2 = &i2;
    *p2 = 2;
    /*error: assignment of read-only variable ‘p2’*/
    //p2 = &i3;

    int const* p3 = &i2;
    /*error: assignment of read-only location ‘* p3’*/
    //*p3 = 2;
    p3 = &i3;

    const int ic = -1, &rc = 0;


    const int id = 0;
    const int *const pd = &id;

    const int *pe = &id;

    /*error: ‘rf’ declared as reference but not initialized*/
    //const int &const rf;

    const int ig = i2, &rg = i2;

    /*rg = 10;*/
}

void test_2_28()
{
    //int i, *const cp;
    //int *p1, *const p2;
    //const int ic, &r = ic;
    //const int *const p3;
    const int *p;
}

int main()
{
    double dval = 3.14;
    double *const cp = &dval;

    *cp = 3.15;

    /*error: assignment of read-only variable ‘cp’*/
    //cp = &dval;

    const double pi = 3.14;
    const double *const pip = &pi;

    return 0;
}
