#include "using_std.h"

char &get_val(string &str, string::size_type ix)
{
    return str[ix];
}

int main()
{
    string s("a value");
    cout << "s = " << s << endl;
    get_val(s, 0) = 'A';
    cout << "s = " << s << endl;

    return 0;
}
