//
//  main.cpp
//  Triangle Class
//
//  Created by Max Lemos on 2/28/15.
//  Copyright (c) 2015 Maximilian Lemos. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

class Triangle
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


int main()
{
    Triangle tri1, tri2;
    float y,z;
    
    tri1.store_side1(16);
    tri1.store_side2(14);
    tri1.store_side3(10.5);
    
    tri2.store_side1(6);
    tri2.store_side2(7.5);
    tri2.store_side3(9);
    
    y = tri1.calc_area();
    z = tri2.calc_area();
    
    cout << "\n" << "The area of triangle 1: " <<y;
    cout << "\n" << "The area of triangle 2: " <<z;
    cout << "\n" << "The perim of triangle 1: ";
    cout << tri1.calc_perim();
    cout << "\n" << "The perim of triangle 2: ";
    cout << tri2.calc_perim();
    cout << "\n";
    
    
    return 0;
}

