//
//  euler10.c
//
//  Problem 10 of Project Euler - Sum of all primes
//  below two million
//
//  Created by Hunter Betz on 8/9/15.
//
//

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(long int);


int main() {
    
    long int sum = 2 + 3;
    long int prime = 0;
    long int k = 1;
    
    //while prime is less than two mil, keep adding the sums of the primes
    while (prime < 2000000) {
        
        //check the lower bound
        prime = (6 * k) - 1;
        if (isPrime(prime) && prime < 2000000) {
            sum += prime;
        }
        
        //check the upper bound
        prime = (6 * k) + 1;
        if (isPrime(prime) && prime < 2000000) {
            sum += prime;
        }

        k++;
        
    }
    
    printf("Sum: %ld\n", sum);
    
    
    return 0;
}

//Check to see if the number passed is a prime
bool isPrime(long int d) {
    
    long int count = 1;
    double square = sqrt(d);

    //if the number is divisible by 2 or 3, its not a prime
    if (d % 2 == 0 || d % 3 == 0) {
        return false;
    }
    
    long int prime = 3;
    
    while(prime <= square) {
        
        prime = (6 * count) - 1;
        if (d % prime == 0) {
            return false;
        }
        prime = (6 * count) + 1;
        if (d % prime == 0) {
            return false;
        }
        count++;
    }
    
    //number is a prime then
    return true;
    
}
