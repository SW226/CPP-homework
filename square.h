#pragma once
#include "rectangle.h"

class square : public rectangle
{
public:
	square(float);
	std::ostream& print(std::ostream&) const override;
};