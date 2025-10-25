#include <iostream>

int main()
{
    unsigned a = 0;
    size_t count = 0;
    while (std::cin >> a)
    {
        count++;
    }

    if (std::cin.eof())
    {
        std::cout << count << "\n";
    }
    else if (std::cin.fail())
    {
        std::cerr << "Input err\n";
        return 1;
    }
}