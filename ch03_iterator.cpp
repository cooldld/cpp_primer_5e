#include "using_std.h"

int main()
{
    string s("some string");
    auto it = s.begin();
    auto end = s.end();

    for (; it != end; it++)
        cout << *it << endl;

    vector<int> v;
    const vector<int> cv;

    auto it1 = v.begin(); //it1的类型是vector<int>::iterator
    auto it2 = cv.begin(); //it2的类型是vector<int>::const_iterator
    auto it3 = v.cbegin(); //it3的类型是vector<int>::const_iterator

    return 0;
}
