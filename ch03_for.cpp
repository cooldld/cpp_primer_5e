#include "using_std.h"

int main()
{
    string s("Hello, world!!!");
    decltype(s.size()) count = 0;

    for (auto c : s)
        if (ispunct(c))
        {
            cout << c << endl;
            count++;
        }

    cout << count << " punct in " << s << endl;

    for (auto &c : s)
        c = toupper(c);
    cout << "toupper " << s << endl;
    return 0;
}
