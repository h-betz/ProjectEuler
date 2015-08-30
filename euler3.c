//
//  euler3.c
//  
//  Uses the fundamental theorem of arithmetic: any number greater
//  than 1 is either a prime or can be written as a product of primes
//
//
//
//  Created by Hunter Betz on 7/30/15.
//
//

#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int main() {
    
    //finds largest prime factor
    long int num = 600851475143;
    long int val = num;
    long int largest = 0;
    
    int count = 2;
    while(count * count <= val) {
        
        if (val % count == 0) {
            
            val /= count;
            largest = count;
            
        } else {
            
            count++;
            
        }
        
    }
    
    if (val > largest) {
        
        largest = val;
        
    }
    
    printf("Largest: %ld\n", largest);
    
    return 0;
}



