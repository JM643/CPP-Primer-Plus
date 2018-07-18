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
    const double foot = 12;                                                         // not sure how to use this variable in program
    const double meters = 0.0254;
    const double kilo = 2.2;
    int bmi;
    
    
    cout << "This program will determine your body mass index (BMI).\n";             // Determine BMI
    cout << "What is your height in inches:";
    float height;
    cin >> height;
    height = height * meters;                                                        // Height converted to meters
    cout << "What is weight in pounds:";                                             // Weight in pounds
    float weight;
    cin >> weight;
    weight = weight/kilo;                                                            // Weight converts to kilogram
    bmi = weight/(height * height);                                                  // BMI formula
    cout << "Your BMI is:" << bmi << endl;
    return 0;
}
