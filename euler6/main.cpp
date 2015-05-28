//
//  main.cpp
//  euler 6 sum square difference
//
//  Created by Aadil Bhatti on 9/25/14.
//  Copyright (c) 2014 Aadil Bhatti. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int set[101];
    int max = 101;
    
    int sumSquares = 0;
    int sum = 0;
    int squareSum = 0;
    int difference = 0;
    
    for (int i = 1; i < max; i++) {
        set[i] = i;
    }
    
    for (int i = 1; i < max; i++) {
        sumSquares += set[i]*set[i];
        sum += set[i];
    }
    
    squareSum = sum*sum;
    
    difference = squareSum - sumSquares;
    
    cout << difference << endl;
}

