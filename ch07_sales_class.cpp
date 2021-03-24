#include "using_std.h"

class Sales_data
{
friend Sales_data add(const Sales_data &, const Sales_data &);
friend ostream &print(ostream &, const Sales_data &);
friend istream &read(istream &, Sales_data &);

public:
    Sales_data() = default;
    Sales_data(const string &s) : book_no(s) {}
    Sales_data(const string &s, unsigned n, double p) : book_no(s), units_sold(n), revenue(p*n) {}
    Sales_data(istream &);

    string isbn() const {return book_no;};
    string isbn2() const {return this->book_no;};
    Sales_data &combine(const Sales_data &);

private:
    double avg_price() const;

    string book_no;
    unsigned units_sold = 1;
    double revenue = 0.0;
};

double Sales_data::avg_price() const
{
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
}

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

Sales_data::Sales_data(istream &is)
{
    read(is, *this);
}

istream &read(istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.book_no >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

int main()
{
    Sales_data x, y, z;

    //cout << x.units_sold << endl;

    return 0;
}
