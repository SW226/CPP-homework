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
    do
    {
        std::cout << "Please enter a shape (rectangle, square, circle, triangle):"
            << std::endl;
        std::cin >> user_type;
        if (user_type != "rectangle" &&
            user_type != "square"    &&
            user_type != "circle"    &&
            user_type != "triangle")
        { 
            std::cout << "You did not enter a shape(rectangle, square, circle, triangle)"
                      << std::endl;
            std::string s;
            std::cin.clear();
            std::getline(std::cin, s, '\n');
        }
        else
        {
            break;
        }
    } while (true);
    
    if (user_type == "rectangle")
    {
        float a;
        float b;
        do
        {
            std::cout << "Please enter width and height, separated by space:" 
                      << std::endl;
            std::cin >> a;
            std::cin >> b;
            if (std::cin.fail())
            {
                std::cout << "You did not enter width and height, separated by space:"
                    << std::endl;
                std::string s;
                std::cin.clear();
                std::getline(std::cin, s, '\n');
            }
            else
            {
                break;
            }
        } while (true);
        std::cout << rectangle(a, b) << std::endl;
    }
    else if (user_type == "square")
    {
        float a;
        do
        {
            std::cout << "Please enter side:" << std::endl;
            std::cin >> a;
            if (std::cin.fail())
            {
                std::cout << "You did not enter side" << std::endl;
                std::string s;
                std::cin.clear();
                std::getline(std::cin, s, '\n');
            }
            else
            {
                break;
            }
        } while (true);
        std::cout << square(a) << std::endl;
    }
    else if (user_type == "circle")
    {
        float a;
        do
        {
            std::cout << "Please enter radius:" << std::endl;
            std::cin >> a;
            if (std::cin.fail())
            {
                std::cout << "You did not enter side" << std::endl;
                std::string s;
                std::cin.clear();
                std::getline(std::cin, s, '\n');
            }
            else
            {
                break;
            }
        } while (true);
        std::cout << circle(a) << std::endl;
    }
    else if (user_type == "triangle")
    {
        float a;
        float b;
        float c;
        do
        {
            std::cout << "Please enter sides separated by space:" << std::endl;
            std::cin >> a;
            std::cin >> b;
            std::cin >> c;
            if (std::cin.fail())
            {
                std::cout << "You did not enter sides separated by space:" << std::endl;
                std::string s;
                std::cin.clear();
                std::getline(std::cin, s, '\n');
            }
            else
            {
                break;
            }
            
        } while (true);
        try
        {
            std::cout << triangle{ a, b, c } << std::endl;
        }
        catch (const std::invalid_argument& e)
        {
            std::cout << e.what() << std::endl;
        }
    }



    // Please enter a shape (rectangle, square, circle, triangle): rectangle
    // Please enter width and height, separated by space: 5.1 3.4
    // rectangle(w: 5.1, h: 3.4, area: XXXX, perimeter: XXXX)
    // 
    // 
    //rectangle r{ 5, 3 };
    //square sq{ 10 };
    //circle cir{ 1 };

    //try 
    //{
    //    triangle t{ 3, 1, 5 };


    //    const shape& s = t;

    //    std::cout << s.area() << std::endl;
    //    std::cout << s.circumference() << std::endl;
    //    std::cout << s.perimeter() << std::endl;

    //    // rectangle(w: XXX, h:XXX, area: XXX, perimeter: XXX)
    //    // square(s: XXX, area: XXX, perimeter: XXX)
    //    // circle(r: XXX, area: XXX, circumference: XXX)
    //    // triangle(???????, area: XXX, perimeter: XXX)
    //    std::cout << sq << std::endl;
    //    std::cout << s << std::endl;
    //}
    //catch (const std::invalid_argument& e)
    //{
    //    std::cout << e.what() << std::endl;
    //}


    return 0;
}