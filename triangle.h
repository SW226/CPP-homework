#pragma once
#include "shape.h"

class triangle : public shape
{
public:
	triangle(float, float, float);
	float area() const override;
	float perimeter() const override;
	std::ostream& print(std::ostream& ostm) const override;
private:
	float m_sides[3];
};
void triangle_checker();