#pragma once
#include <iosfwd>
class shape
{
public:
	virtual ~shape() = default;
	virtual float area() const= 0;
	virtual float perimeter() const = 0;
	virtual float  circumference() const;
	virtual std::ostream& print(std::ostream&) const = 0;
};
std::ostream& operator<< (std::ostream& ostm, const shape& s);
//std::istream& operator>> (std::istream& istm, const float& s);
//std::istream& operator>> (std::istream& istm, const std::string& s);
void clear();
void shape_checker(std::string);