//
//  main.cpp
//  C3E1.cpp
//
//  Created by JM643 on 7/11/18.
//  Copyright © 2018 JM643. All rights reserved.
//

#include <iostream>
using namespace std;


int main()
{
    using namespace std;
    cout << "What is your height in inches:__\b\b";                      // Height in inches along with escape sequence indicating where to type
    int h_inches;                                                        // Integer declaration
    cin >> h_inches;                                                     // User input of height in inches
    const int feet = h_inches / 12;                                      // Height in inches converted to feet
    const int inches = h_inches % 12;                                    // Remainder
    cout << "You are" << feet << "feet and" << inches << "inches tall." << endl;
}
