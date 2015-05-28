//
//  main.cpp
//  euler9 pythagorean triplet
//
//  Created by Aadil Bhatti on 9/29/14.
//  Copyright (c) 2014 Aadil Bhatti. All rights reserved.
//  This program finds the Pythagorean triple such that a + b + c = 1000.

#include <iostream>
using namespace std;

int main()
{
    for (int a = 0; a < 1000; a++)
        for (int b = 0; b < 1000; b++)
            for (int c = 0; c < 1000; c++)
                if (a*a + b*b == c*c && a != 0 && b != 0 && c != 0)
                    if (a + b + c == 1000) {
                        cout << a << " " << b << " " << c << " " << endl;
                        cout << a * b * c << endl;
                    }
}

