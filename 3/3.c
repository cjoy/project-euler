/*  3.c: Largest prime factor (ProjectEuler.NET)
    --------------------------------------------------------------
    Author: Christopher Joy
    License: GNU General Public License (GPL)
    
    Description
    --------------------------------------------------------------
    The prime factors of 13195 are 5, 7, 13 and 29.
    What is the largest prime factor of the number
    600851475143?
*/

#include <stdio.h>
#include <stdlib.h>

int isPrime(unsigned long long int num);

int main (int argc, char *argv[]) {
    
    unsigned long long int checkNum = 600851475143;
    int fcount;
    fcount = 0;
    int factors[10000] = {};
    
    printf( "Printing Factors [count:factor - 0/1]\n"
            "_____________________________________\n");
    for (int i = 1; i <= checkNum; i++) {
        if ((checkNum % i) == 0) {
            printf("[%d:%d - %d]",fcount,i,isPrime(i));
            factors[fcount] = i;
            fcount++;
        }
    }
    printf("\n");
    
    
    return EXIT_SUCCESS;
}

int isPrime(unsigned long long int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if ((num % i) == 0) {
            count++;
        }
    }
    
    int result = 0;
    if (count <= 2) {
        result = 1;
    }
    
    return result;
}
