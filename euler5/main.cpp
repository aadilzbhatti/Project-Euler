//
//  main.cpp
//  euler 5 smallest multiple
//
//  Created by Aadil Bhatti on 9/25/14.
//  Copyright (c) 2014 Aadil Bhatti. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    bool isDivisible = false;
    
    for (int i = 2520; i > 0; i++) {
        
        for (int j = 1; j < 20; j++) {
            
            if (i % j == 0)
                
                isDivisible = true;
            
            else {
                
                isDivisible = false;
                
                break;
            }
        }
        
        if (isDivisible) {
            
            cout << i << endl;
            
            break;
            
        }
    }
}