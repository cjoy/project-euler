/*  7.c: 10001st prime (ProjectEuler.NET)
    ---------------------------------------------
    Author: Christopher Joy
    License: GNU General Public License (GPL)
    
    Description
    ---------------------------------------------
    Find the difference between the sum of the squares 
    of the first one hundred natural numbers and the square of the sum.

*/

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

// prime number to find
#define PRIME 10001

// checks if the given number (i) is a prime number
int isPrime(int i);

int main (int argc, char *argv[]) {
    
    int found = 0;
    
    int i = 0;
    while (found != PRIME) {
        i++;
        
        if (isPrime(i) == TRUE) {
            found++;
        }
        
    }
    printf("\n{%d}\n", i);
    
    return EXIT_SUCCESS;
}

int isPrime(int i) {
    int prime = FALSE;
    int found = 0;
    
    for (int j = 1; j <= i; j++) {
        if ((i % j) == 0) {
            found++;
        }
    }
    
    if (found == 2) {
        prime = TRUE;
    }
    
    return prime;
}
