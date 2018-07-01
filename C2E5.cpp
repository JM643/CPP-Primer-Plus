//
//  Ch2Ex5.cpp
//  Question 5
//
//  Created by JM642 on 6/30/18.
//  Copyright © 2018 JM643. All rights reserved.
//

#include <iostream>

double udftemp(double celsius)             // user defined function protoype
{
    using namespace std;
    return 1.8 * celsius + 32.0;
}

int main()
{
    using namespace std;
    double temp;
    cout << "Please enter a Celsius value:";
    cin >> temp;
    cout << temp << "degrees Celsius is" << udftemp(temp) << "degrees Fahrenheit" << endl;
}
