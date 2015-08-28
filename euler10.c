//
//  euler10.c
//
//  Problem 10 of Project Euler - Sum of all primes
//  below two million using Sieve of Eratosthenes
//
//  Created by Hunter Betz on 8/9/15.
//
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    
    long int i;
    
    long int j;
    long int n = 2000000;
    int *prime;
    prime = malloc(2000000 * sizeof(int));
    
    printf("Here\n");
    
    //assign all locations in array a value of 1
    for (i = 0; i < n; i++) {
        
        prime[i] = 1;
        
    }
    
    //sieve the non-primes from the array
    for (i = 2; i < n; i++) {
        
        if (prime[i]) {
            
            for(j = i; i * j< n; j++) {
                
                prime[i * j] = 0;
                
            }
            
        }
        
    }

    long int sum = 0;
    //sum up the primes
    for (i = 2; i < n; i++) {
        if(prime[i]) {
            sum += i;
        }
        
    }

    free(prime);
    printf("Sum: %ld\n", sum);
    

    
}
