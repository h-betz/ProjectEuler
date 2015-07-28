//
//  euler1.c
//  HelloWorld
//
//  Created by Hunter Betz on 7/6/15.
//  Copyright (c) 2015 Hunter Betz. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int x = 1;
    int sum = 0;
    while (x <= 333) {
        
        sum += (3 * x);
        x++;
        
    }

    x = 1;
    int sum2 = 0;
    while (x <= 199) {
        
        sum += (5 * x);
        x++;
    }
    
    x = 1;
    int sum3 = 0;
    while (x <= 66) {
        
        sum3 += (15 * x);
        x++;
    }
    
    printf("%i \n", sum2 + sum - sum3);
    
    return 0;
}