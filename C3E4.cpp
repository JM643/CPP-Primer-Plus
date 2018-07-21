//
//  main.cpp
//  C3E4
//
//  Created by JM643 on 7/20/18.
//  Copyright © 2018 JM643. All rights reserved.
//
#include <iostream>

int main()
{
    using namespace std;
    
    const long min = 60;                            // total seconds in a minute
    const long hr = 3600;                           // total seconds in an hour
    const long day = 86400;                         // total seconds in a day
    const long hrs_in_day = 24;                     // total hours in a day
    long seconds, minutes, hours, days, n_sec;
    
    cout << "Enter the number of seconds:";
    cin >> seconds;
    
    days = seconds / day;
    hours = seconds / hr % hrs_in_day;
    minutes = seconds / 60 % min;                   
    n_sec = seconds % 60;                            // new seconds variable
    
    cout << seconds <<" " "seconds " " = " " " << days << " " "day(s)," " " << hours <<" " "hours," " " << minutes << " " "minutes," " " << n_sec << " " "seconds" << endl;
    return 0;
}
