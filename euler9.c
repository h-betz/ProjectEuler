//
//  euler9.c
//
//  Solves problem 9 on Project Euler - Special Pythagorean Triplet
//  Find the numbers a, b, and c such that they are a pythagorean triplet,
//  a^2 + b^2 = c^2 and that a + b + c = 1000. Return the product of abc
//
//  Created by Hunter Betz on 8/9/15.
//
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main() {
    
    
    int sum = 1000;
    
    for (int a = 1; a <= sum/3; a++) {  //a has to be no greater than a third because a < b < c
        
        for (int b = a + 1; b <= sum/2; b++) {  //b has to be greater than a but less than c
            
            //only possible value for c in our case is what remains after subtracting a and b from 1000
            int c = sum - a - b;
            
            if ((a*a) + (b*b) == (c*c)) {   //satisfies pythagorean triple
                long int product = a * b * c;
                printf("A: %d\n", a);
                printf("B: %d\n", b);
                printf("C: %d\n", c);
                printf("Product: %ld\n", product);
            }
        }
        
        
    }
    
    
    return 0;
}
