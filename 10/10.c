/*  10.c: Summation of primes (ProjectEuler.NET)
    --------------------------------------------------------------
    Author: Christopher Joy
    License: GNU General Public License (GPL)
    
    Description
    --------------------------------------------------------------
    Find the sum of all the primes below two million.
*/

#include "euler.h"


int main (int argc, char *argv[]) {
    lint limit = 20000000;
    int *primes = malloc(sizeof(int) * limit);
    
    printf("Generating Sieve Table...\n");
    sievePrime(limit, primes);
    printf("Sieve Table Generated!\n");
    printf("-------------------------------------\n");

    lint i = 0;
    lint sum = 0;
    for (i = 0; i < limit; i++) {
        if (primes[(int)i]) {
            sum += i;
            printf("sum(%lld) prime(%lld)\r", sum, i);
        }
    }

    printf("sum(%lld) prime(%lld)\n", sum, i);
    
    return EXIT_SUCCESS;
}
