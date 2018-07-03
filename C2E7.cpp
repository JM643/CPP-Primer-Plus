//
//  main.cpp
//  Ch2Ex7
//
//  Created by JM643 on 7/2/18.
//  Copyright © 2018 JM643. All rights reserved.
//

#include <iostream>
void time(int h, int m);
{
    using namespace std; 
    cout << "Time" << h << ":" << m << endl; 
}

int main()
{
    using namespace std;
    cout << "Enter the number of hours:";
    int h;
    cin >> h;
    cout << "Enter the number of minutes:";
    int m;
    cin >> m;
    time(h,m);
    return 0;
}

