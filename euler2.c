//
//  euler2.c
//  
//  Even Fibonacci Numbers 
//
//  Created by Hunter Betz on 7/27/15.
//
//

#include <stdio.h>
#include <math.h>

int fibo(double prev1, double prev2, double sum) {
    
    double next_sum = prev1 + prev2;

    if (prev1 >= 4000000) {
        printf("Sum: %f\n", sum);
        printf("Return\n");
        return sum;
    }
    
    if (fmod(prev1, 2) == 0) {
        
        sum += prev1;
        return fibo(next_sum, prev1, sum);

    } else {
        
        return fibo(next_sum, prev1, sum);
        
    }
    
    return sum;
}

int main(void) {
    
    double sum = fibo(2, 1, 0);
    printf("%f\n", sum);
    
    return 0;
}


