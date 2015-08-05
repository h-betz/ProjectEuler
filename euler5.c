//
//  euler5.c
//  
//  Find the smallest number that is evenly divisible by all numbers 1-20
//
//  Created by Hunter Betz on 8/4/15.
//
//

#include <stdio.h>
#include <stdbool.h>


int main() {
    
    //set starting value to 20 since 20 is the max number we are checking for even divisibility
    int mult = 20;
    bool b = true;
    
    while(true) {
        
        if (mult % 20 == 0) {   //can rule out 2, 4, 5, and 10 since they are factors of 20
            if (mult % 18 == 0) {   //can rule out 3, 6, and 9 since they are factors of 18
                if (mult % 16 == 0) {   //can rule out 8 since it's a factors of 16
                    if (mult % 14 == 0) {   //can rule out 7 since it's a factor of 14
                        if (mult % 17 == 0) {   //check 17 (prime number)
                            if (mult % 19 == 0) {   //check 19 (prime number)
                                if (mult % 13 == 0) {   //check 13 (prime number)
                                    if (mult % 12 == 0) {   //check 12
                                        if (mult % 11 == 0) {   //check 11 (prime number)
                                            printf("%d\n", mult);
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        //increment by 20 since the # we are looking for has to be a multiple of 20
        mult += 20;
        
    }
    
    return 0;
}
