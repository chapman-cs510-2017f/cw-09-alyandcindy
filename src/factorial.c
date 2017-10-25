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
    /* By convention in C, all local variables must be type-defined at the top
     * of each function. This includes all iteration dummy variables. */
    int fac = n;
    
    if (n == 0){
        printf("0! = 1 \n");
        return 1;
    }
    else{
        while (n > 1){
            /* Note: The shorthand syntax
             * var-- reads the contents of an integer variable, then decrements
             * --var decrements the contents of an integer variable, then reads it
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
