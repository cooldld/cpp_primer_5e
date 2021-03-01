#include <iostream>

int main()
{
    int start;
    std::cout << "Enter start number:" << std::endl;
    std::cin >> start;
    int end;
    std::cout << "Enter end number:" << std::endl;
    std::cin >> end;
    std::cout << "The start to end number:" << std::endl;
    while (start <= end)
    {
        std::cout << start << std::endl;
        start++;
    }
    return 0;
}
