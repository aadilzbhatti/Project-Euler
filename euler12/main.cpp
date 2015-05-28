//
//  main.cpp
//  euler12 triangle number
//
//  Created by Aadil Bhatti on 1/30/15.
//  Copyright (c) 2015 Aadil Bhatti. All rights reserved.
//

#include <iostream>
using namespace std;

int64_t triangle(int64_t);
int64_t numDivisors(int64_t);

int main() {
    
    /*long i = 1;
    
    while (numDivisors(triangle(i) <= 501))
        i++;
    
    cout << triangle(i) << endl;
    
    cout << numDivisors(triangle(i)) << endl;*/
    
    long n = triangle(900000);
    
    cout << n << endl;
    cout << numDivisors(n) << endl;
}

int64_t triangle(int64_t num) {
    
    if (num == 1)
        
        return 1;
    
    else
        
        return num + triangle(num-1);
}

int64_t numDivisors(int64_t n) {
    
    long count = 0;
    
    for (long i = 1; i <= n; i++) {
        
        if (n % i == 0)
            
            count++;
        
    }
    
    return count;
}