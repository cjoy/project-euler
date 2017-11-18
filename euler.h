/*  euler.h: Euler's Bible (ProjectEuler.NET)
    -----------------------------------------------------------------
    Author: Christopher Joy
    License: GNU General Public License (GPL)
    
    Description
    --------------------------------------------------------------
    Useful functions and definitions for math-based problems.
    
    Code Book Standards
    --------------------------------------------------------------
    n: provided constant
    n = n*k NOT n = n * k
    
    
*/

#ifndef STDIO_H
    #include <stdio.h>
#endif

#ifndef STDLIB_H
    #include <stdlib.h>
#endif

#ifndef MATH_H
    #include <math.h>
#endif

#ifndef ASSERT_H
    #include <assert.h>
#endif


#ifndef TRUE
    #define TRUE 1
#endif

#ifndef FALSE
    #define FALSE 0
#endif

typedef unsigned long long lint;

// isPrime(lint i): check if a given number (i) is a prime or not.
int isPrime(lint n) {
    if (n <= 1) return FALSE;
    if (n == 2 || n == 3) return TRUE;
    if (n%2 == 0 || n%3 == 0) return FALSE;
    lint i,w;
    for (i = 5, w = 2; i*i <= n; i += w, w = 6-w)
        if (n%i == 0) 
            return FALSE;
    return TRUE;
}

// isPrime(lint i): check if a given number (i) is a prime or not.
// nb: in-effecient, but good for testing new primative test functions
int isPrime2(lint n) {
    int prime = FALSE;
    int found = 0;
    for (lint j = 1; j <= n; j++)
        if ((n % j) == 0)
            found++;
    if (found == 2)
        prime = TRUE;
    return prime;
}

void testIsPrime(lint limit) {
    printf("Testing: isPrime(n) == isPrime2(n):\n");
    for (lint i = 0; i<=limit; i++)
        if (isPrime(i) != isPrime2(i))
            printf("%lld:%d != %lld:%d\n", i, isPrime(i), i, isPrime2(i));
        else
            printf("%lld:%d == %lld:%d\r", i, isPrime(i), i, isPrime2(i));

    printf("\nPrime Tests Passed! - primative values are equal.\n");
}

// sievePrime(lint limit, int *arr): generate an array of primes, given the bound (limit)
void sievePrime(lint limit, int *primes) {
    primes[0] = FALSE;
    primes[1] = FALSE;
    primes[2] = TRUE;
    primes[3] = TRUE;
    primes[4] = FALSE;
    
    for (lint i = 5; i <= limit; i++)
        primes[(int)i] = isPrime(i);
    
}