//
//  main.cpp
//  Shape_class with subclasses:
//
//                    Shape
//                      |
//              Circle—————Rectangle
//                |            |
//              Sphere       Square
//
//  Created by Max Lemos on 3/9/15.
//  Copyright (c) 2015 Maximilian Lemos. All rights reserved.
//
//
// a rectangle - 14.75 and 3.5 area perim
// a square - 9.34      area perim
// a sphere - 7.5   volume surface area

// return rounded in shape class
//
// print all appropriate results
//
// rounded area
// rounded perimeter

#include <iostream>

class Shape {
    
    protected:

    public:
        int return_rounded_area();
        int return_rounded_perimeter();
        virtual float calc_area();
        virtual float calc_perim();
};

class Circle: public Shape {

protected:
    float radius;
public:
    void store_radius(float);
    float return_radius();
    float calc_area();
    float calc_circum();
    Circle();
    Circle(float);
};

void Circle::store_radius(float value)
{
    if (value >= 0)
        radius = value;
    else
        radius = -1 * value;
}

float Circle::return_radius()
{
    return radius;
}

float Circle::calc_area()
{
    return ( 3.14 * radius * radius);
}

float Circle::calc_circum()
{
    float circum;
    circum = 3.14 * 2 * radius;
    return circum;
}

Circle::Circle()
{
    radius = 1;
}

Circle::Circle(float value)
{
    if (value >= 0)
        radius = value;
    else
        radius = -1 * value;
}


class Rectangle: public Shape {
    
protected:
    float length;
    float width;
public:
    void store_length(float);
    void store_width(float);
    float return_length();
    float return_width();
    float calc_area();
    float calc_perim();
};

void Rectangle::store_length(float s1)
{
    length = s1;
}

void Rectangle::store_width(float s1)
{
    width = s1;
}

float Rectangle::return_length()
{
    return length;
}

float Rectangle::return_width()
{
    return width;
}

float Rectangle::calc_area()
{
    float area;
    area = length * width;
    return area;
}

float Rectangle::calc_perim()
{
    float perim;
    perim = (length * 2) + (width * 2);
    return perim;
}


class Square: public Rectangle {
    
protected:
    
public:
    void store_side(float);
    float return_side();
    float calc_perim();
    
};

void Square::store_side(float s_1)
{
    width = s_1;
    length = s_1;
}

float Square::return_side()
{
    return width;
}


float Square::calc_perim()
{
    float perim;
    perim = return_side() + return_side() + return_side() + return_side();
    return perim;
}


class Sphere: public Circle {

protected:
    
public:
    float calc_volume();
    float calc_area();
    Sphere();
};


float Sphere::calc_volume()
{
    float vol =  3.1415926535*(radius * radius * radius) * 4/3;
    return vol;
}

float Sphere::calc_area()
{
   
    float ar1 = (4)*(3.1415926535)*(radius * radius);
    return ar1;
}

Sphere::Sphere()
{
    radius = 0;
}



int main()
{
    Rectangle rect1;
    Square sq1;
    Sphere sph1;
    
    sph1.store_radius(7.5);
    rect1.store_length(14.75);
    rect1.store_width(3.5);
    sq1.store_side(9.34);
    std::cout << "Here is the area of our rectangle: " << rect1.calc_area();
    std::cout << "\n";
    std::cout << "Here is the perim of our rectangle: " << rect1.calc_perim();
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "Here is the area of our square: " << sq1.calc_area();
    std::cout << "\n";
    std::cout << "Here is the perim of our square: " << sq1.calc_perim();
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "Here is the volume of our sphere: " << sph1.calc_volume();
    std::cout << "\n";
    std::cout << "Here is the area of our square: " << sph1.calc_area();
    std::cout << "\n";

    return 0;
}
