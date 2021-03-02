#include "using_std.h"

void test_3_5()
{
    string rs;
    string tmp;

    while (cin >> tmp)
        //rs += tmp;
        rs += tmp + " ";
    cout << "rs = " << rs << endl;
}

int main()
{
    string s1, s2;

#if 0
    cin >> s1 >> s2;
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
#endif

    test_3_5();

#if 0
    while (cin >> s1)
        cout << s1 << endl;
#else
    while (getline(cin, s1))
        cout << s1 << endl;
#endif
    return 0;
}
