//
//  header_shape.h
//  polymorphism_shape_class
//
//  Created by Max Lemos on 3/23/15.
//  Copyright (c) 2015 Maximilian Lemos. All rights reserved.
//

#ifndef polymorphism_shape_class_header_shape_h
#define polymorphism_shape_class_header_shape_h

class Shape {
    
protected:
    
public:
    int return_rounded_area();
    int return_rounded_perimeter();
    virtual float calc_area();
    virtual float calc_perim();
};

int Shape::return_rounded_area()
{
    return calc_area() + .5;
}

int Shape::return_rounded_perimeter()
{
    return calc_perim() + .5;
}

float Shape::calc_area()
{
    return -1;
}

float Shape::calc_perim()
{
    return -1;
}

class Triangle: public Shape
{
private:
    float side1;
    float side2;
    float side3;
    bool valid();        // so the main program cant run it, but your methods can.
    
public:
    void store_side1(float);
    void store_side2(float);
    void store_side3(float);
    float return_side1();                 //void is optional, () is acceptable;
    float return_side2();                 //void is optional, () is acceptable;
    float return_side3();                 //void is optional, () is acceptable;
    float calc_area();
    float calc_perim();
};

bool Triangle::valid()
{
    if ((side1<side2+side3)&&(side2<side1+side3)&&(side3<side1+side2))
        return true;
    else
        return false;
}

void Triangle::store_side1(float s1)
{
    side1 = s1;                     //don’t restate the initialization of the variable radius above
}

void Triangle::store_side2(float s2)
{
    side2 = s2;                     //don’t restate the initialization of the variable radius above
}

void Triangle::store_side3(float s3)
{
    side3 = s3;                     //don’t restate the initialization of the variable radius above
}

float Triangle::return_side1()
{
    return side1;
}

float Triangle::return_side2()
{
    return side2;
}

float Triangle::return_side3()
{
    return side3;
}


float Triangle::calc_perim()
{
    float perim;                    //you can use local variables, but they are not permanent
    perim = side1+side2+side3;
    return perim;
}

float Triangle::calc_area()
{
    //while(valid())
    float s = 0.5*(side1+side2+side3);
    float heron1 = (s*(s-side1)*(s-side2)*(s-side3));
    float area = sqrt(heron1);
    return area;
}


class Circle: public Shape
{
protected:
    float radius;
public:
    void store_radius(float);
    float return_radius();
    float calc_area();
    float calc_circum();
    float calc_perim();
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
float Circle::calc_perim()
{
    return calc_circum();
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



#endif
