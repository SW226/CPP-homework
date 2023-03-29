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