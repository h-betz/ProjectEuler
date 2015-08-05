//
//  euler6.c
//
//  Finding the difference between the sum of the squares of the first
//  100 numbers and the square of the sum
//
//  Created by Hunter Betz on 8/5/15.
//
//

#include <stdio.h>

long int sum_square();
long int square_sum();


int main() {
    
    long int diff = 0;
    long int sum_sq = 0;
    long int sq_sum = 0;
    
    sum_sq = sum_square();
    sq_sum = square_sum();
    
    diff = sq_sum - sum_sq;
    printf("%ld\n", diff);
    
    return 0;
}

//find the sum of the squares
long int sum_square() {
    
    long int num = 1;
    long int sum = 0;
    
    while(num <= 100) {
        sum += num * num;
        num++;
    }
    
    return sum;
}

//find the square of the sum
long int square_sum() {
    
    long int num = 1;
    long int sum = 0;
    long int square = 0;
    
    while(num <= 100) {
        sum += num;
        num++;
    }
    
    square = sum * sum;
    
    return square;
}
