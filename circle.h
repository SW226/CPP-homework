#pragma once
#include "shape.h"

class circle : public shape
{
public:
	circle(float);
	float area() const override;
	float perimeter() const override;
	std::ostream& print(std::ostream& ostm) const override;

private:
	float m_radius;
};