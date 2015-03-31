//  Hex Converter
//  User inputs Hex humbers and converts to decimal until an * is inputed, stopping the program.
//
//  02-23-15_HW
//
//  Created by Max Lemos on 2/23/15.
//  Copyright (c) 2015 Maximilian Lemos. All rights reserved.

//Decimal    0    1    2    3    4    5    6    7    8    9    10    11    12    13    14    15
//Hex      0    1    2    3    4    5    6    7    8    9    A    B    C    D   E        F
//


#include <iostream>

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
    
    cout << "Enter values: ";
    cin >> value1;
    cin >> value2;
    cin >> value3;
    cout << "\n" ;
    
    while (value1 != '*')
        
    {
        
        digit1 = check_legal(value1);
        digit2 = check_legal(value2);
        digit3 = check_legal(value3);
        
        if (digit1 != -1 && digit2 != -1 && digit3 != -1)
        {
            answer = 256*digit1 + 16*digit2 + digit3;
            cout << answer;
        }
        cout << "\n";
        cout << "Enter more values: " ;
        cin >> value1 >> value2 >> value3;
        cout << "\n" ;
        while (value1 == '*')
        {
            cout << "Bye";
            break;
        }

    }
    
    
    return 0;
    
}


int check_legal(char testing)

{
    
    int test_chr;
    switch (testing)
    
    {
            
        case '0':
            test_chr = 0;
            break;
            
        case '1':
            test_chr = 1;
            break;
            
        case '2':
            test_chr = 2;
            break;
            
        case '3':
            test_chr = 3;
            break;
            
        case '4':
            test_chr = 4;
            break;
            
        case '5':
            test_chr = 5;
            break;
            
        case '6':
            test_chr = 6;
            break;
            
        case '7':
            test_chr = 7;
            break;
            
        case '8':
            test_chr = 8;
            break;
            
        case '9':
            test_chr = 9;
            break;
            
        case 'A':
            test_chr = 10;
            break;
            
        case 'a':
            test_chr = 10;
            break;
            
        case 'B':
            test_chr = 11;
            break;
            
        case 'b':
            test_chr = 11;
            break;
            
        case 'C':
            test_chr = 12;
            break;
            
        case 'c':
            test_chr = 12;
            break;
            
        case 'D':
            test_chr = 13;
            break;
            
        case 'd':
            test_chr = 13;
            break;
            
        case 'E':
            test_chr = 14;
            break;
            
        case 'e':
            test_chr = 14;
            break;
            
        case 'F':
            test_chr = 15;
            break;
            
        case 'f':
            test_chr = 15;
            break;
            
        default:
            test_chr = -1;
            cout << "invalid";
            break;
            
    }
    
    return test_chr;
    
    
}