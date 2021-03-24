#include "using_std.h"

int x;

void test(int x)
{
    /*error: declaration of ‘int x’ shadows a parameter*/
    /*int x;*/

    throw runtime_error("throw test");

    {
        int x;
    }
}

int main()
{
    test(1);
    return 0;
}
