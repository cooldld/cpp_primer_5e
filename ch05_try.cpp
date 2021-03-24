#include "using_std.h"

void test()
{
    throw runtime_error("throw test");
    cout << __FUNCTION__ << endl;
}

void test2()
{
    try
    {
        test();
    }
    //catch (exception ex)
    catch (range_error ex)
    {
        cout << "range_error, ex.what() = " << ex.what() << endl;
    }
}

int main()
{
    try
    {
        test2();
    }
    catch (runtime_error err)
    {
        cout << "runtime_error, err.what() = " << err.what() << endl;
    }
    return 0;
}
