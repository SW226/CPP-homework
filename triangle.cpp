#include <iostream>
#include <iterator>
#include <numeric>
#include <cmath>
#include <stdexcept>
#include <string>
#include "triangle.h"

triangle::triangle(float side1, float side2, float side3)
 : m_sides{side1, side2 ,side3}
{
}

float triangle::area() const
{
	const float s = perimeter() * 0.5f;
	return sqrt(s * (s - m_sides[0]) * (s - m_sides[1]) * (s - m_sides[2]));
}

float triangle::perimeter() const
{
	return std::accumulate(std::cbegin(m_sides), std::cend(m_sides), 0.f);
}

std::ostream& triangle::print(std::ostream& ostm) const
{
	return ostm << "Triangle("
				<< "side1:" << m_sides[0] << ","
				<< "side2:" << m_sides[1] << ","
				<< "side3:" << m_sides[2] << ","
				<< "area:"  << area()     << ","
				<< "perimeter:" << perimeter()
				<< ")";
}
void triangle_checker()
{
	float a, b, c;
	do
	{
		std::cout << "Please enter sides separated by space:" << std::endl;
		std::cin >> a >> b >> c;

		if (std::cin.fail())
		{
			std::cout << "You did not enter sides separated by space:" << std::endl;
			clear();
		}
		else if (a + c <= b || a + b <= c || c + b <= a)
		{
			std::cout << "Please enter three numbers that can form a triangle" << std::endl;
			std::cin.clear();
		}
		else
		{
			break;
		}

	} while (true);
	std::cout << triangle{ a, b ,c } << std::endl;
}