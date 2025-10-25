#include <iostream>

int main()
{
    unsigned a = 0;
    std::cin >> a;

    if (std::cin.eof())
    {
        std::cout << 0 << "\n";
    }
    else if (std::cin.fail())
    {
        std::cerr << "Input err\n";
        return 1;
    }
}