#include "using_std.h"

void test_3_6()
{
    string s("0123456789ABCDEF");
    for (auto &c : s)
        c = 'X';
    cout << "s = " << s << endl;
}

void test_3_7()
{
    string s("0123456789ABCDEF");
    for (char &c : s)
        c = 'X';
    cout << "s = " << s << endl;
}

void test_3_9()
{
    string s;
    cout << "s[0] = " << s[0] << endl;
}

void test_3_10()
{
    string s1;
    string s2;
    cin >> s1;
    for (auto c : s1)
        if (isalnum(c))
            s2 += c;
    cout << "s2 = " << s2 << endl;
}

void test_3_11()
{
    const string s("0123456789ABCDEF");
    for (auto &c : s)
        /*error: assignment of read-only reference ‘c’*/
        //c = 'X';
        ;
    cout << "s = " << s << endl;
}

int main()
{
    const string s("0123456789ABCDEF");
    //decltype(s.size()) n = 0;
    string::size_type n = 0;
    string result;

    test_3_6();
    test_3_7();
    test_3_9();
    test_3_10();
    test_3_11();

    while (cin >> n)
        if (n < s.size())
            result += s[n];
    cout << "result = " << result << endl;

    return 0;
}
