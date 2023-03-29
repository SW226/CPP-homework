#include <iostream>
#include "shape.h"


float shape::circumference() const
{
	return perimeter();
}

std::ostream& operator<< (std::ostream& ostm, const shape& s)
{
	return s.print(ostm);
}