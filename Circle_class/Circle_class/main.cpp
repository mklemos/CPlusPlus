//
//  main.cpp
//  Circle_class
//
//  Created by Max Lemos on 2/26/15.
//  Copyright (c) 2015 Maximilian Lemos. All rights reserved.
//

#include <iostream>

using namespace std;

class Circle
{
private:
    float radius;
public:
    void store_radius(float);
    float return_radius();                 //void is optional, () is acceptable;
    float calc_area();
    float calc_circum();
    Circle();
    Circle(float);
};

void Circle::store_radius(float r)
{
    radius = r;                     //don’t restate the initialization of the variable radius above
}

float Circle::return_radius()
{
    return radius;
}

float Circle::calc_circum()
{
    float circum;                    // you can use local variables, but they are not permanent
    circum = 3.14*2*radius;
    return circum;
}

float Circle::calc_area()
{
    return 3.14 * radius * radius;
}

Circle::Circle()
{
    radius=1;
}

Circle::Circle(float value)
{
    if (value >=0)
        radius=value;
    else
        radius = -1 * value;
    //store_radius(value);           This line works too, one method can call another method, 
        
}


int main()
{
    Circle cir1, cir2, cir3;
    Circle cir4(-7);  // improperly putting the radius as a perameter to reduce the chance of errors.
    cir1.store_radius(10);
    cir2.store_radius(100);
    cout << "radius cir3: " << cir3.return_radius() << "\n";
    cout << "Area: "<< cir3.calc_area() << "\n";
    cout << "radius cir1: " << cir1.return_radius() << "\n";
    cout << "Area: "<< cir1.calc_area() << "\n";
    cout << "radius cir2: " << cir2.return_radius() << "\n";
    cout << "Area: "<< cir2.calc_area() << "\n";
    cout << "radius cir4: " << cir4.return_radius() << "\n";
    cout << "Area: "<< cir4.calc_area() << "\n";
    
    
    return 0;
}
