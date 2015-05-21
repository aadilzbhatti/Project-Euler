//
//  main.cpp
//  euler1 mult 3 and 5
//
//  Created by Aadil Bhatti on 6/27/14.
//  Copyright (c) 2014 Aadil Bhatti. All rights reserved.
//  This program calculates the sum of the natural multiples of 3 or 5

#include <iostream>
using namespace std;

const int K = 1000;

int main() {
    
    int num3 = 0;
    int num5 = 0;
    int sum3 = 0;
    int sum5 = 0;
    int sum15 = 0;
    int sumTotal = 0;
    
    cout << "This is the sum of the natural numbers below 1000" << endl;
    cout << "that are multiples of 3 and 5." << endl << endl;
    
    for (int i = 1; i < K; i++) {
        if (i % 3 == 0) {
            sum3 += i;
            num3++;
        }
        if (i % 5 == 0) {
            sum5 += i;
            num5++;
        }
        if (i % 15 == 0) {
            sum15 += i;
        }
    }
    
    sumTotal = sum3 + sum5 - sum15;
    
    cout << "There are " << num3 << " multiples of 3 and\n"
    << num5 << " multiples of 5 in 1000.\n\n";

    cout << "The sum of the multiples of 3 and 5 below 1000 is: " << sumTotal << endl;
    
    return 0;
}

