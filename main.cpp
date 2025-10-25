#include <iostream>

bool isPyth(unsigned a, unsigned b, unsigned c)
{
    bool condit = a*a == b*b + c*c;
    condit = condit || b*b == a*a + c*c;
    condit = condit || c*c == b*b + a*a;
    return condit;
}

int main()
{
    unsigned a = 0, b = 0, c = 0;
    size_t count = 0;
    std::cin >> c >> b;
    while (std::cin >> a)
    {
        count += isPyth(a, b, c)?1:0;
        c = b;
        b = a;
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