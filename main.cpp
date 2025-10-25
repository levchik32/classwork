#include <iostream>
#include <limits>

size_t max_value()
{
    return std::numeric_limits<unsigned>::max();
}

bool isPyth(unsigned a, unsigned b, unsigned c)
{
    if ((max_value() / a < a) || (max_value() / b < b) || (max_value() / c < c))
    {
        throw std::overflow_error("overflow in isPyth");
    }
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
        try
        {
            size_t plus = isPyth(a, b, c)?1:0;
            if (count == max_value() && plus == 1)
            {
                std::cerr << "overflow\n";
                return 2;
            }
            count += plus;
        }
        catch (...)
        {
            std::cerr << "overflow\n";
            return 2;
        }
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