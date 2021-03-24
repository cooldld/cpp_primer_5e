#include "using_std.h"

int main()
{
    int a = (3 || 5);
    cout << "a = " << a << endl;

    int b = (3 && 5);
    cout << "b = " << b << endl;

    return 0;
}
