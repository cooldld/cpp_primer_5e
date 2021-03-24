#include "using_std.h"

vector<string> get_val(int x)
{
    if (0 == x)
        return {};
    else if (1 == x)
        return {"aaa"};
    else if (2 == x)
        return {"aaa", "bbb"};
    else
        return {"aaa", "bbb", "ccc"};
}

void eg()
{
    int ax[5] = {1, 2, 3, 4, 5};
    int ay[3] = {3, 2, 1};
    int (*p)[5];

    p = &ax;

    /*error: cannot convert ‘int [5]’ to ‘int (*)[5]’ in assignment*/
    /*p = ax;*/

    /*error: cannot convert ‘int (*)[3]’ to ‘int (*)[5]’ in assignment*/
    /*p = &ay;*/
}

int main()
{
    cout << get_val(0).size() << endl;
    cout << get_val(1).size() << endl;
    cout << get_val(2).size() << endl;
    cout << get_val(3).size() << endl;
    cout << get_val(4).size() << endl;
    return 0;
}
