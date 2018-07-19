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
    const double foot = 12;
    const double meters = 0.0254;
    const double kilo = 2.2;
    int feet;
    int inches;
    float height;
    float weight;
    float bmi;
    
    
    cout << "This program will determine your body mass index (BMI).\n\n";           // Determine BMI
    cout << "Please enter your height.\n";
    cout << "Feet:";
    cin >> feet;
    cout << "Inches:";
    cin >> inches;
    height = feet * foot + inches;                                                   // User input converted inches
    height = height * meters;                                                        // Height converted to meters
    cout << "What is weight in pounds:";
    cin >> weight;
    weight = weight/kilo;                                                            // Weight converts to kilogram
    bmi = weight/(height * height);                                                  // BMI formula
    cout << "Your BMI is:" << bmi << endl;
    return 0;
}
