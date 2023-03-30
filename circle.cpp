#include <iostream>
#include "circle.h"

circle::circle(float radius)
 : m_radius(radius)
{
}

float circle::area() const
{
	return m_radius * m_radius * 3.1415926f;
}

float circle::perimeter() const
{
	return 2 * m_radius * 3.1415926f;
}

std::ostream& circle::print(std::ostream& ostm) const
{
	return ostm << "Circle("
		<< "r:" << m_radius  << ","
		<< "area:" << area() << ","
		<< "circumference:" << circumference()
		<< ")";
}

void circle_checker()
{
    float a;
    do
    {
        std::cout << "Please enter radius:" << std::endl;
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
    std::cout << circle(a) << std::endl;
}