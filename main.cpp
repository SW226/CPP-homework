#include <iostream>
#include <string>
#include "shape.h"
#include "rectangle.h"
#include "square.h"
#include "circle.h"
#include "triangle.h"




int main(int argc, char* argv[])
{
    std::string user_type;
    shape_checker(user_type);
    
    if (user_type == "rectangle")
    {
        rectangle_checker();
    }
    else if (user_type == "square")
    {
        square_checker();
    }
    else if (user_type == "circle")
    {
        circle_checker();
    }
    else if (user_type == "triangle")
    {
        triangle_checker();
    }
    return 0;
}