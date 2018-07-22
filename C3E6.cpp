//
//  main.cpp
//  C3E6
//
//  Created by JM643 on 7/22/18.
//  Copyright © 2018 JM643. All rights reserved.
//

#include <iostream>
using namespace std;
float miles_driven, gallons_used;                                       // float used for added precision, int can also be used

int main()
{
    cout << "This program will determine your vehicle's miles per gallon (MPG).\n\n";
    cout << "Enter how many miles you have driven:" " ";
    cin >> miles_driven;
    cout << "Enter how many gallons of gasoline you used:" " ";
    cin >> gallons_used;
    cout << "Your MPG is " " " << miles_driven/gallons_used << endl;
    return 0;
}

