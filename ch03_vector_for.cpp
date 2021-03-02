#include "using_std.h"

void test_3_18()
{
    vector<int> v;

    /*segmentation fault (core dumped)*/
    //v[0] = 42;
}

void test_3_19()
{
    vector<int> v1{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> v2(10, 42);
    vector<int> v3 = v2;

    cout << "v1.size = " << v1.size() << endl;
    cout << "v2.size = " << v2.size() << endl;
    cout << "v3.size = " << v3.size() << endl;
}

void test_3_20()
{
    vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << __FUNCTION__ << endl;

    for (decltype(v.size()) i = 0; i < v.size(); i++)
    {
        if (i + 1 >= v.size())
        {
            cout << v[i] << endl;
            break;
        }
        cout << v[i] + v[i + 1] << endl;
        i++;
    }

    decltype(v.size()) i = 0;
    decltype(v.size()) j = v.size() - 1;
    while (i < j)
    {
        cout << "i = " << i << ", v[i] = " << v[i] << endl;
        cout << "j = " << j << ", v[j] = " << v[j] << endl;
        cout << v[i] + v[j] << endl;
        i++;
        j--;
    }
    if (i == j)
        cout << "i = " << i << ", v[i] = " << v[i] << endl;
}

int main()
{
    vector<int> v{0, 1, 2, 3, 4, 5};

    for (auto &i : v)
    {
        i *= i;
    }

    for (auto i : v)
    {
        cout << i << endl;
    }

    test_3_18();

    test_3_19();

    test_3_20();

    return 0;
}
