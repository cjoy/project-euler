/*  2.c: Even Fibonacci numbers (ProjectEuler.NET)
    --------------------------------------------------------------
    Author: Christopher Joy
    License: GNU General Public License (GPL)
    
    Description
    --------------------------------------------------------------
    By considering the terms in the Fibonacci sequence whose 
    values do not exceed four million, find the sum of the 
    even-valued terms.
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int fib[40] = {1,2};
    int sum = 0;
    for (int i = 2; i < 40; i++) {
        fib[i]=fib[i-1]+fib[i-2];
        if (fib[i] % 2 == 0) {
            sum += fib[i];
            printf(", %d[%d]", fib[i], sum);
            printf("<-");
        }
    }
    printf("\nSUM:%d \n", sum+2);
    
    return EXIT_SUCCESS;
}