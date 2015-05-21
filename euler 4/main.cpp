//
//  main.cpp
//  euler4 largest palindrome product of 3 digit numbers
//
//  Created by Aadil Bhatti on 7/17/14.
//  Copyright (c) 2014 Aadil Bhatti. All rights reserved.
//  This program finds the largest palindrome which is a product of 3 digit numbers

#include <iostream>
using namespace std;

bool isPalindrome(long);

int main() {
    
    long num;
    long pal;
    int i, j, iPal, jPal;
    
    i = j = 0;
    iPal = jPal = 0;
    pal = 0;
    
    for (i = 100; i < 1000; i++) {
        
        for (j = 100; j < 1000; j++) {
            
            num = i*j;
            
            if (isPalindrome(num)) {
                
                if (num > pal)
                    
                    pal = num;
                
                iPal = i;
                jPal = j;
                
            }
            
        }
        
    }
    
    cout << pal << " = " << jPal << " * " << iPal << endl;
    
}

bool isPalindrome(long num) {
   
    long new_num = 0;
    long n = num;
    
    while (num > 0) {
        
        new_num = new_num * 10 + (num % 10);
        
        num = num / 10;
    }
    
    if (n == new_num)
        
        return true;
    
    else
        
        return false;
    
}