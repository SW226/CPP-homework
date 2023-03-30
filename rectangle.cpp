#include <iostream>
#include "rectangle.h"


rectangle::rectangle(float width, float height) 
 :m_width(width)
 ,m_height(height)
{
}

float rectangle::area() const
{
	return m_width * m_height;
}

float rectangle::perimeter() const
{
	return 2 * (m_width + m_height);
}

float rectangle::width() const
{
	return m_width;
}

float rectangle::height() const
{
	return m_height;
}

std::ostream& rectangle::print(std::ostream& ostm) const
{
	return ostm << "Rectangle("
				<< "w:" << m_width   << ","
				<< "h:" << m_height  << ","
				<< "area:" << area() << ","
				<< "perimeter:" << perimeter()
				<< ")";
}

void rectangle_checker()
{
    float a, b;
    do
    {
        std::cout << "Please enter width and height, separated by space:"
            << std::endl;
        std::cin >> a >> b;
        if (std::cin.fail())
        {
            std::cout << "You did not enter width and height, separated by space:"
                << std::endl;
            clear();
        }
        else
        {
            break;
        }
    } while (true);
    std::cout << rectangle(a, b) << std::endl;
}