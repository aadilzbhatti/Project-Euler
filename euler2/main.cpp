//
//  main.cpp
//  euler2 even fibonacci numbers
//
//  Created by Aadil Bhatti on 6/30/14.
//  Copyright (c) 2014 Aadil Bhatti. All rights reserved.
//  This program finds the sum of all of the even fibonacci sequence terms below 4 million

#include <iostream>
using namespace std;

int main() {

    int term1, term2;
    term1 = term2 = 1;
    int sum;
    int evenSum = 0;
    
    cout << "This program finds the sum of all of the even fibonacci sequence terms below 4 million." << endl << endl;
    
    while (term1 < 4000000) {
        sum = term1 + term2;
        term1 = term2;
        term2 = sum;
        if (term1 % 2 == 0) {
            evenSum += term1;
        }
    }
    cout << "The sum of the even fibonacci terms below 4 million = " << evenSum << endl;
    
    return 0;
}

