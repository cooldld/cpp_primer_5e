#include "using_std.h"

void screen(int x, int y, int z = 101)
{
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
}

void screen(int x = 1, int y = 10, int z);

int main()
{
    screen();
    return 0;
}
