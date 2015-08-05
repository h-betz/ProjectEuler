//
//  euler4.c
//  
//
//  Largest Palindrome created by the product of two 3 digit
//  integers.
//
//  Created by Hunter Betz on 8/3/15.
//
//

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>



bool is_palindrome(int num[], int digits) {
    
    int count = 0;
    int front = 0;
    int last = digits - 1;
    int middle = digits / 2;
    
    while (front != middle) {
        if (num[front] != num[last]) {
            return false;
        }
        front++;
        last--;
        
    }
    
    return true;
    
}


int main() {
    
    long long int x = 1;
    long long int y = 999;
    
    long long int product = 0;
    
    int ndigits = floor(log10(llabs(y))) + 1;

    int numarray[ndigits - 1];
    int count = 0;
    int temp = 0;
    long long int store = 0;
    long long int largest_one = 0;
    long long int largest_two = 0;
    
    while (y > 0) {
        while (x <= 999) {
        
            product = x * y;
            ndigits = floor(log10(llabs(product))) + 1;
            count = ndigits;
            store = product;
        
            while (product > 0) {
            
                temp = product % 10;
                numarray[count-1] = temp;
                count--;
                product = product / 10;
            
            }
        
            if(is_palindrome(numarray, ndigits)) {
                if (store > largest_one) {
                    
                    largest_one = store;
                }
            }
        
            x++;
        
        }
        x = 1;
        y--;
    }
    
    printf("%lld\n", largest_one);


    
    return 0;
}

