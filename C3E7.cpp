//
//  main.cpp
//  C3E7
//
//  Created by JM643 on 7/22/18.
//  Copyright © 2018 J643. All rights reserved.
//
#include <iostream>
using namespace std;
float kmL;

int main()
{
    cout << "This program will convert your vehicles km/L to MPG.\n\n";
    cout << "Enter your vehicle's km/L:";
    cin >> kmL;
    cout << "Your vehicle's km/L converts to" " " <<  (100 * 3.785411784)/(1.609344 * kmL) <<" " " MPG." << endl;           // US MPG
}

    // imperial system formula -- (100/kmL) * 2.825
