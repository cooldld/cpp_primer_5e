#include <iostream>

int main()
{
    const double pi = 3.14;
    /*error: invalid conversion from ‘const double*’ to ‘double*’ [-fpermissive]*/
    //double *ptr = &pi;

    const double *cptr = &pi;

    /*error: assignment of read-only location ‘* cptr’*/
    //*cptr = 42;

    double dval = 3.14;
    cptr = &dval;

    return 0;
}
