//
//  euler12.c
//  
//  Solution for project euler problem 12 -
//  First triangle number with over 500 divisors
//
//  Created by Hunter Betz on 8/26/15.
//
//

#include <stdio.h>
#include <math.h>


int divide(long int);

int main() {
    
    int divisors = 0;
    long int triangle = 0;
    long int tri_num = triangle;
    
    do {
        
        triangle++;
        tri_num += triangle;
        divisors = divide(tri_num);
        
    } while (divisors <= 500);
    
    printf("Triangle: %ld\n", tri_num);
    
    return 0;
}

int divide(long int triangle) {
    
    long int val = triangle;
    int divisor = 1;
    int count = 0;
    int square = sqrt(triangle);
    
    while(divisor <= square) {
        
        if (val % divisor == 0) {
            
            count += 2;
            
        }
        
        divisor++;
        
    }
    
    return count;
    
}
