//
//  Ch2Ex5.cpp
//  Question 5
//
//  Created by JM642 on 6/30/18.
//  Copyright © 2018 JM643. All rights reserved.
//

#include <iostream>

using namespace std;
double udtemp(double ctemp)         // user defined function prototype, double used to store value
{
    using namespace std;
    return 1.8 * ctemp + 32.0;      // return value
}

int main()
{
    using namespace std;
    cout << "Please enter a Celsius value:";    // character output
    double ctemp;                               // function defined
    cin >> ctemp;                               // user input, function called, value will be returned to user defned prototype
    cout << ctemp << "degrees Celsius is" << udtemp(ctemp) << "degrees Fahrenheit";
}
