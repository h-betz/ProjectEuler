//
//  euler8.c
//
//  Finds the largest product of 13 sequential digits out of a 1000 digit number
//  Takes the input array and converts it to an integer array. Analyzes the array
//  by separating it into arrays of length 13, finds the product of the sub array
//  and compares that with the previous largest product value.
//
//  Created by Hunter Betz on 8/7/15.
//
//

#include <stdio.h>
#include <string.h>

int main() {
    
    //input digit is in character format
    char digit[1000] = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
    
    //create a new int array the same size as the input array
    int digits[1000];
    
    //convert to integer array
    for (int i = 0; i < 1000; i++) {
        digits[i] = digit[i] - '0';
    }
    

    int start = 0;          //lower bound on subarray of 13 digits
    int index = 0;          //keeps track of index in the sequence of 13 numbers
    int end_index = index + 12;   //upper bound on the subarray of 13 digits
    
    long int product = 1;   //keeps track of product of current 13 digit sequence
    long int largest = 0;   //keeps track of largest product
    int count = 1;      //counts number of digits we used in the product
    
    //keep finding largest product until end index reaches the end
    while (end_index < 1000) {
        
        //find product of 13 sequential numbers, break if product is 0 or if found the product of 13 sequential numbers
        while (count <= 13) {
            
            product = digits[index] * product;    //calculate product
            
            if (product == 0) { //check if product is 0
                
                start = index;    //if product is 0, set new start as the position of where the 0 was
                break;  //break out of inner loop
                
            }
            
            index++;        //increment index
            count++;        //increment count
            
        }
      
        start++;                    //increment start index
        index = start;              //set the new index as the start of the new subarray
        end_index = index + 12;     //set the new end index 12 digits away from the start of the new subarray
        count = 1;                  //reset count back to 0
        
        //if current product is larger than the previous largest product, reassign the value
        if (product > largest) {
            largest = product;
        }
        
        //set product back to 1
        product = 1;

    }
    
    printf("Largest: %ld\n", largest);
    
    return 0;
}
