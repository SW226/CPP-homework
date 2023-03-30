#include <iostream>
#include <string>
#include "shape.h"


float shape::circumference() const
{
	return perimeter();
}

std::ostream& operator<< (std::ostream& ostm, const shape& s)
{
	return s.print(ostm);
}

//std::istream& operator>> (std::ostream& istm, const float& s)
//{
//    return istm >> s;
//}
//
//std::istream& operator>> (std::istream& istm, const std::string& s)
//{
//    return istm >> s;
//}

void clear()
{
    std::string s;
    std::cin.clear();
    std::getline(std::cin, s, '\n');
}

void shape_checker(std::string& input)
{
    do
    {
        std::cout << "Please enter a shape (rectangle, square, circle, triangle):"
            << std::endl;
        std::cin >> input;
        if (input != "rectangle" &&
            input != "square" &&
            input != "circle" &&
            input != "triangle")
        {
            std::cout << "You did not enter a shape(rectangle, square, circle, triangle)"
                << std::endl;
            clear();
        }
        else
        {
            break;
        }
    } while (true);
}
