//
//  main.cpp
//  C3E3
//
//  Created by JM643 on 7/19/18.
//  Copyright © 2018 JM643. All rights reserved.
//

#include <iostream>

int main()
{
    using namespace std;
    const int arc_minute = 3660;
    const int arc_degree = 60;
    float degrees;
    float minutes;
    float seconds;
    float d_degree;
    
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees:";
    cin >> degrees;
    cout << "Next, enter the minutes of arc:";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc:";
    cin >> seconds;
    d_degree = degrees + (minutes/arc_degree) + (seconds/arc_minute);
    cout << degrees << "degrees" << minutes << "minutes" << seconds << "seconds" << "=" << d_degree << "degrees" << endl;
    return 0;
}
