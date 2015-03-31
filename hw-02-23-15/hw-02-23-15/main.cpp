//  Hex Converter
//  User inputs Hex humbers and converts to decimal until an * is inputed, stopping the program.
//
//  02-23-15_HW
//
//  Created by Max Lemos on 2/23/15.
//  Copyright (c) 2015 Maximilian Lemos. All rights reserved.

//Decimal	0	1	2	3	4	5	6	7	8	9	10	11	12	13	14	15
//Hex	 0	1	2	3	4	5	6	7	8	9	A	B	C	D   E	    F

//

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;


int check_legal(char a);

int main()
{
    
    char value1;
    char value2;
    char value3;
    
    int digit1;
    int digit2;
    int digit3;
    
    int answer;
    
    cout << "Enter 1st value: ";
    cin >> value1;
    cout << "Enter 2nd value: ";
    cin >> value2;
    cout << "Enter 3rd value: ";
    cin >> value3;
    
    while (value1 != '*')
    {
        digit1 = check_legal(value1);
        digit2 = check_legal(value2);
        digit3 = check_legal(value3);
        
        answer = 256*digit1 + 16*digit2 + digit3;
        
        cout << answer;
    }
    
    
    return EXIT_SUCCESS;
    
}

int check_legal(char testing)
{
    int a;
    switch (testing)
    {
        case '0':
            a = 0;
        case '1':
            a = 1;
        case '2':
            a = 2;
        case '3':
            a = 3;
        case '4':
            a = 4;
        case '5':
            a = 5;
        case '6':
            a = 6;
        case '7':
            a = 7;
        case '8':
            a = 8;
        case '9':
            a = 9;
        case 'A':
            a = 10;
        case 'a':
            a = 10;
        case 'B':
            a = 11;
        case 'b':
            a = 11;
        case 'C':
            a = 12;
        case 'c':
            a = 12;
        case 'D':
            a = 13;
        case 'd':
            a = 13;
        case 'E':
            a = 14;
        case 'e':
            a = 14;
        case 'F':
            a = 15;
        case 'f':
            a = 15;
        default:
            cout << "that is invalid input try again";
            break;
    }
    return a;
    
}


