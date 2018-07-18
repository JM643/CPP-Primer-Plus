//
//  main.cpp
//  C3E2
//
//  Created by JM643 on 7/18/18.
//  Copyright © 2018 JM643. All rights reserved.
//

#include <iostream>

int main()
{
    using namespace std;
    cout << "This program will determine your body mass index (BMI)." << endl;  // Determine BMI
    cout << "What is your height in inches:";
    int height;                                         //  Height in inches
    cin >> height;
    cout << "What is weight in pounds:";                // Weight in pounds
    float weight;
    cin >> weight;
    float meters;
    meters = height * 0.0254;                           // Height in inches converted to meters
    float m_kilo;
    m_kilo = weight / 2.2;                              // Weight in pounds converted to mass in kilograms
    cout << "Your BMI is:" << m_kilo / (meters * meters) << endl;
    return 0;
    
}
