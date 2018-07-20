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
    
    const long sec = 60;
    const long min = 60;
    const long day = 24;
    long seconds;
    long minutes;
    long hours;
    long days;
    long n_sec;
    
    cout << "Enter the number of seconds:";
    cin >> seconds;
    
    days = seconds / 86400;
    hours = seconds / 3600 % day;
    minutes = seconds / sec % min;
    n_sec = seconds % sec;                          // new seconds variable
   
    cout << seconds <<" "  "seconds " " = " " " << days << " " "day(s)," " " << hours <<" " "hours," " " << minutes << " " "minutes," " " << n_sec << " " "seconds" << endl;
    return 0;
}
