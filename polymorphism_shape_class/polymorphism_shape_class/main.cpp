//
//  main.cpp
//  Shape_class with subclasses:
//
//                         Shape
//                           |
//              Circle—---Triangle--——Rectangle
//                |                      |
//              Sphere                 Square
//
//  Created by Max Lemos on 3/9/15.
//  Copyright (c) 2015 Maximilian Lemos. All rights reserved.
//
//
// a rectangle - 14.75 and 3.5 area perim
// a square - 9.34      area perim
// a sphere - 7.5   volume surface area
// a triangle - 6 14 10.5
//
// return rounded in shape class
//
// print all appropriate results
//
// rounded area
// rounded perimeter

#include <iostream>
#include <math.h>
#include "header_shape.h"


int main()
{
    Rectangle rect1;
    Square sq1;
    Triangle tri1;
    Circle cir1;
    
    float x;
    float y;
    float z;
    float a;
    float b;
    float c;
    float d;
    
    std::cout << "Please enter length of rectangle: ";
    std::cin >> x;
    rect1.store_length(x);
    std::cout << "Please enter width of rectangle: ";
    std::cin >> y;
    rect1.store_width(y);
    std::cout << "Please enter side of square: ";
    std::cin >> z;
    sq1.store_side(z);
    std::cout << "Please enter side 1 of triangle: ";
    std::cin >> a;
    tri1.store_side1(a);
    std::cout << "Please enter side 2 of triangle: ";
    std::cin >> b;
    tri1.store_side2(b);
    std::cout << "Please enter side 3 of triangle: ";
    std::cin >> c;
    tri1.store_side3(c);
    std::cout << "Please enter radius circle: ";
    std::cin >> d;
    cir1.store_radius(d);
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "Here is the area of our rectangle: " << rect1.return_rounded_area();
    std::cout << "\n";
    std::cout << "Here is the perim of our rectangle: " << rect1.return_rounded_perimeter();
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "Here is the area of our square: " << sq1.return_rounded_area();
    std::cout << "\n";
    std::cout << "Here is the perim of our square: " << sq1.return_rounded_perimeter();
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "Here is the area of our circle: " << cir1.return_rounded_area();
    std::cout << "\n";
    std::cout << "Here is the perim of our circle: " << cir1.return_rounded_perimeter();
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "Here is the area of our triangle: " << tri1.return_rounded_area();
    std::cout << "\n";
    std::cout << "Here is the perim of our triangle: " << tri1.return_rounded_perimeter();
    std::cout << "\n";
    std::cout << "\n";
    
    return 0;
}
