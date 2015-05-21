//
//  main.cpp
//  euler7 10001st prime
//
//  Created by Aadil Bhatti on 9/25/14.
//  Copyright (c) 2014 Aadil Bhatti. All rights reserved.
//

#include <iostream>
using namespace std;

bool isPrime(int);
const int LIM = 10001;

int main()
{
    int primes[LIM];
    int j = 2;
    int l = 0;
    
    for (int i = 0; l < LIM; i++) {
        
        if (isPrime(j)) {
            primes[l] = j;
            l++;
        }
        
        j++;
    }
    
    int k = primes[LIM-1];
    cout << k << " is the 10001st prime" << endl;
}

bool isPrime(int k) {
    
    bool b = false;
    int count = 0;
    
    for (int i = 2; i < k; i++) {
        
        if (k % i == 0)
            
            count++;
        
    }
    
    if (count == 0)
        
        b = true;
    
    return b;
    
}
