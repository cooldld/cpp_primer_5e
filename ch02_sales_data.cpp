#include "using_std.h"

struct Sales_data
{
    string book_no;
    unsigned units_sold = 1;
    double revenue = 0.0;
};

int main()
{
    Sales_data x, y, z;

    cout << x.units_sold << endl;

    return 0;
}
