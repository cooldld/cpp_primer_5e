#include "using_std.h"

void test_3_12()
{
    vector<vector<int>> ivec;

    /*error: conversion from ‘std::vector<std::vector<int> >’ to non-scalar type ‘std::vector<std::basic_string<char> >’ requested*/
    //vector<string> svec = ivec;

    vector<string> svec2(10, "null");
}

void test_3_13()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};
}

void test_3_14()
{
    vector<int> ivec;
    int i;

    while (cin >> i)
    {
        ivec.push_back(i);
    }
}

void test_3_15()
{
    vector<string> svec;
    string s;

    while (cin >> s)
    {
        svec.push_back(s);
    }
}

int main()
{
    vector<int> ivec;
    vector<int> ivec2{10};
    cout << "ivec2.size = " << ivec2.size() << endl;
    vector<int> ivec3 = {10};
    vector<string> svec{"hello"};
    vector<string> svec2{10};
    cout << "svec2.size = " << svec2.size() << endl;
    vector<string> svec3 = svec2;//{10};
    vector<string> svec4(10);
    cout << "svec4.size = " << svec4.size() << endl;
    cout << "(svec2 == svec4) = " << (svec2 == svec4) << endl;
    vector<vector<string>> file;

    test_3_12();

    test_3_13();

    //test_3_14();

    test_3_15();

    return 0;
}
