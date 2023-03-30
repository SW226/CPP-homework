#pragma once
#include "shape.h"

class rectangle : public shape
{
public:
	rectangle(float, float);
	float area() const override;
	float perimeter() const override;
	float width() const;
	float height() const;
	std::ostream& print(std::ostream&) const override;

private:
	float m_width;
	float m_height;
};
void rectangle_checker();