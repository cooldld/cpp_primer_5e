#include <iostream>

int main()
{
    int sum = 0, val = 0;

    if (std::cin >> val)
        std::cout << "val = " << val << std::endl;
    else
        std::cout << "std::cin >> val error" << std::endl;

    while (std::cin >> val)
    {
        sum += val;
    }
    std::cout << "sum = " << sum << std::endl;
    return 0;
}
