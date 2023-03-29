#include <iostream>
#include "circle.h"

circle::circle(float radius)
 : m_radius(radius)
{
}

float circle::area() const
{
	return m_radius * m_radius * 3.1415926;
}

float circle::perimeter() const
{
	return 2 * m_radius * 3.1415926;
}

std::ostream& circle::print(std::ostream& ostm) const
{
	return ostm << "Circle("
		<< "r:" << m_radius  << ","
		<< "area:" << area() << ","
		<< "circumference:" << circumference()
		<< ")";
}