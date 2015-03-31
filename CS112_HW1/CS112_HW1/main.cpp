/*
 
Maximilian Lemos
main.cpp
CS112_HW1
 
Created by Max Lemos on 1/26/15.
Copyright (c) 2015 Maximilian Lemos. All rights reserved.
 
-first assign x,y,z values 3.2, 4.7, 5.9
-create a const double FEE 16.4

 1) 7x-12y + FEE
 2) (x-y*z)/(FEE -1)
 3) 4(2x+6y)
 4) is 4x less than 3y
 5) (FEE +6)((x+yz)/2) 
 
 */

#include <iostream>
using namespace std;

int main ()
{
    double x = 3.2;
    double y = 4.7;
    double z = 5.9;
    const double FEE = 16.4;
    
    cout << "Problem one:\n";
    double answer1 = 7*x-12*y+FEE;
    cout << answer1;
    cout << "\n";
    cout << "\n";
    
    cout << "Problem two:\n";
    double answer2 = (x-y*z)/(FEE-1);
    cout << answer2;
    cout << "\n";
    cout << "\n";
    
    cout << "Problem three:\n";
    double answer3 = 4*(2*x+6*y);
    cout << answer3;
    cout << "\n";
    cout << "\n";
    
    cout << "Problem four:\n";
    double answer4 = 4*x < 3*y;
    cout << answer4;
    cout << "\n";
    cout << "\n";
    
    cout << "Problem five:\n";
    double answer5 = (FEE+6)*((x+y*z)/2);
    cout << answer5;
    cout << "\n";
    cout << "\n";
    
    
    return 0;
}
