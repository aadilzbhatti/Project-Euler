//
//  main.cpp
//  euler10 sum of primes
//
//  Created by Aadil Bhatti on 9/29/14.
//  Copyright (c) 2014 Aadil Bhatti. All rights reserved.
//  Adds prime numbers under 2,000,000

#include <iostream>
using namespace std;

bool isPrime (long);
const int LIM = 2000000;

struct list {
    int value;
    list* next;
};

int main()
{
    
}

bool isPrime(long num, list* node) {
    while (node != nullptr)
        if (num % node->value == 0)
            return false;
    return true;
}

list* addToList(int num) {
    while
}