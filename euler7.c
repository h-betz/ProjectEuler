//
//  euler7.c
//
//  Find the 10001st prime
//
//  Created by Hunter Betz on 8/6/15.
//
//

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(long long int);

int main() {
    
    int counter = 2;    //keep track of the # of primes, 2 and 3 we know are primes
    
    long long int prime = 0;    //prime number
    long long int k = 1;    //k value for the algorithm
    
    //primes are of the form 6*k +/- 1, loop until 10001st prime is found
    while (counter != 10001) {
        
        prime = (6 * k) - 1;    //check lower bound of the prime
        
        if (isPrime(prime)) {   //if its a prime, increment the counter
            counter++;
        }
        
        //checking to see if the counter breaks the loop after increment
        if (counter >= 10001) {
            break;
        }
        
        prime = (6 * k) + 1;    //check the upper bound of the prime
        
        if (isPrime(prime)) {   //if its a prime, increment the counter
            counter++;
        }
        k++;
        
    }
    
    printf("%lld\n", prime);
    
    return 0;
}


//checks to see if the number passed is a prime
bool isPrime(long long int d) {
    
    long long int count = 1;        //acts as the k value
    long long int square = sqrt(d); //prime numbers don't exist beyond the square root of the number in question
    
    //if the number is divisible by 2 or 3, its not a prime
    if (fmod(d, 2) == 0 || fmod(d, 3) == 0) {
        return false;
    }
    
    long long int prime = 3;    //set prime number to largest prime number that we haven't tested yet
    
    //while the prime numbers are below the square and not evenly divisble by d, keep looping
    while(prime <= square) {
        
        prime = (6 * count) - 1;
        if (fmod(d, prime) == 0) {  //number is not a prime
            return false;
        }
        prime = (6 * count) + 1;
        if (fmod(d, prime) == 0) {  //number is not a prime
            return false;
        }
        count++;
    }
    
    //number is a prime then
    return true;
    
}
