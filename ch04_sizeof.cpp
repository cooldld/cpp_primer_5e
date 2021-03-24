#include "using_std.h"

int main()
{
    string s("abc123");
    cout << "s = " << s << ", sizeof(s) = " << sizeof(s) << endl;

    string s1;
    cout << "s1 = " << s1 << ", sizeof(s1) = " << sizeof(s1) << endl;

    vector<int> iv(3);
    cout << "vector<int> iv(3)"<< ", sizeof(iv) = " << sizeof(iv) << endl;

    vector<int> iv2(30, 1);
    cout << "vector<int> iv2(30, 1)"<< ", sizeof(iv2) = " << sizeof(iv2) << endl;

    vector<string> sv(3, "h");
    cout << "vector<string> sv(3, h)"<< ", sizeof(sv) = " << sizeof(sv) << endl;

    vector<string> sv2(3, "hh");
    cout << "vector<string> sv2(3, hh)"<< ", sizeof(sv2) = " << sizeof(sv2) << endl;

    vector<string> sv3;
    cout << "vector<string> sv3"<< ", sizeof(sv3) = " << sizeof(sv3) << endl;

    return 0;
}
