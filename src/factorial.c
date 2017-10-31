/*
# Name: Aly Baughman, Cynthia Parks
# Student ID: 1923165, 2303535
# Email: baugh107@mail.chapman.edu, cparks@chapman.edu
# Course: CS510 Fall 2017
# Assignment: Classwork 9
*/

/* An include literally copies and pastes the contents of the indicated file.
 * A .h file is called a "header" file for the code.
 * Usually, its primary purpose is to specify type signatures so all code below
 * knows what the correct types of all functions and variables are even before
 * their definitions appear. This prevents ordering issues during compilation.
 */
#include "factorial.h"
#include <stdio.h>

/* Definition for "factorial"
 * Note: the type must match the type specified within the header file above
 */
int factorial(int n) {
    /* Local variable fac set to help us find the factorial
     */
    int fac = n;
    
    /*check to see if 0 or a negative number are entered
     */
    if (n == 0){
        printf("0! = 1 \n");
        return 1;
    }
    else if (n < 0){
        printf("Need a positive integer!\n");
        return 0;
    }
    
    else{
        while (n > 1){
            /* if n > 1 then the program proceeds to decrement n and multiply it by fac
             *until n is decremented to 1, then the final multiplication takes place and we leave
             *the loop
             */
            n--;
            printf("Fac is %d \n n is %d \n", fac, n);
            // a *= b is equivalent to a = a * b
            fac *= n;
        printf("Fac is %d \n", fac);
        }
    }
    /* The type of the returned value must match the type indicated before the
     * function name above (here "int")
     */
    return fac;
}
