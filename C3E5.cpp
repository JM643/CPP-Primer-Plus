//
//  main.cpp
//  C3E5
//
//  Created by JM643 on 7/21/18.
//  Copyright © 2018 JM643. All rights reserved.
//

#include <iostream>

using namespace std;
long long w_pop, us_pop;

int main()
{
    cout << "Enter the world's population:" " ";
    cin >> w_pop;
    cout << "Enter the population of the US:" " ";
    cin >> us_pop;
    cout << "The population of the US is" " " << double (us_pop)/w_pop * 100 <<"%" " of the world population." << endl;
    return 0;
}
