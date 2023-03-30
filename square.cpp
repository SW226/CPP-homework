#include <iostream>
#include "square.h"

square::square(float side)
 :rectangle(side, side)
{
}

std::ostream& square::print(std::ostream&ostm) const
{
	return ostm << "Square("
				<< "s:" << width() << ","
				<< "area:" << area() << ","
				<< "perimeter:" << perimeter()
				<< ")";
}

void square_checker()
{
    float a;
    do
    {
        std::cout << "Please enter side:" << std::endl;
        std::cin >> a;
        if (std::cin.fail())
        {
            std::cout << "You did not enter side" << std::endl;
            clear();
        }
        else
        {
            break;
        }
    } while (true);
    std::cout << square(a) << std::endl;
}