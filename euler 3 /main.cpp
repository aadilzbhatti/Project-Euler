//
//  main.cpp
//  euler3 largest prime factor
//
//  Created by Aadil Bhatti on 7/1/14.
//  Copyright (c) 2014 Aadil Bhatti. All rights reserved.
//  This program displays the largest prime factor of the number given by x below.

#include <iostream>

using namespace std;

const long x = 600851475143;

int main() {
    
    long factor = 1;
    
    cout << "This program shows the largest prime factor of " << x << "." << endl;
    
    for (long i = 2; i < x; i++) {
        if (x % i == 0) {
            factor *= i;
            if (factor == x) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}

