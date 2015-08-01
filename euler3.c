//
//  euler3.c
//  
//  Find the largest prime factor of the number 600851475143
//  Where n is the number whose largest prime factor we are trying
//  to find, the largest prime factor of n can't exceed the sqrt(n)
//  Further, we know that prime numbers are of the form:
//  6k +/- 1 (excluding 2 and 3) where k is any digit beginning at 1
//
//  Created by Hunter Betz on 7/30/15.
//
//

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(double d) {
    
    double count = 1;
    double square = sqrt(d);
    
    //if the number is divisible by 2 or 3, its not a prime
    if (fmod(d, 2) == 0 || fmod(d, 3) == 0) {
        return false;
    }
    
    double prime = 3;
    
    do {

        prime = (6 * count) - 1;
        if (fmod(d, prime) == 0) {
            return false;
        }
        prime = (6 * count) + 1;
        if (fmod(d, prime) == 0) {
            return false;
        }
        count++;
    } while(prime <= square);
    
    //number is a prime then
    return true;
    
}

bool isFactor(double d) {
    
    double num = 600851475143;

    if (fmod(num, d) == 0) {
        return true;
    }
    
    return false;
}

int main() {
    
    double num = 600851475143;
    double square = sqrt(num);      //prime number can't be larger than the number's square

    double prime = 2;

    double largest = 1;
    double count = 1;
    
    //find the largest prime number that is less than or equal to the square root of number in question
    do {

        //prime numbers are of the form 6k +/- 1
        prime = (6 * count) + 1;
        if (isFactor(prime)) {
            if (isPrime(prime)) {
                largest = prime;
            }
        } else {
            prime = (6 * count) - 1;
            if (isFactor(prime)) {
                if (isPrime(prime)) {
                    largest = prime;
                }
            }

        }
        
        count++;
        
    } while(prime <= square);
    
    double x = 600851475143 / 104441;
    printf("Largest: %f\n", largest);
    
    return 0;
}



