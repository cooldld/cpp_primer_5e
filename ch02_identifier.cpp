#include <iostream>

int main()
{
    /*error: expected unqualified-id before ‘=’ token*/
    //int double = 3.14;

    int _;

    /*error: expected unqualified-id before ‘catch’*/
    //int catch-22;

    /*error: expected unqualified-id before numeric constant*/
    //int 1_or_2 = 1;

    double Double = 3.14;

    return 0;
}
