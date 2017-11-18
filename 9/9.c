/*  9.c: Special Pythagorean triplet (ProjectEuler.NET)
    --------------------------------------------------------------
    Author: Christopher Joy
    License: GNU General Public License (GPL)
    
    Description
    --------------------------------------------------------------
    There exists exactly one Pythagorean triplet for which a + b + c = 1000.
    Find the product abc.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (int argc, char *argv[]) {
    unsigned long long a = 0;
    unsigned long long b = 0;
    double c = 0;
    
    for (a = 1; a < 1000; a++) {
        for (b = 1; b < 1000; b++) {
            c = sqrt(a*a + b*b);
            if (a < b && b < c && a < c && floorf(c) == c) {
                printf("a:%lld,b:%lld,c:%lld\r", a, b, (unsigned long long)c);
                if ((a+b+c)==1000) {
                    printf("a:%lld,b:%lld,c:%lld\n", a, b, (unsigned long long)c);
                    printf("Product abc = %lld\n", a*b*(unsigned long long)c);
                    return EXIT_SUCCESS;
                }
            }
            else {
                printf("a:%lld,b:%lld,c:%lld\r", a, b, (unsigned long long)c);
            }
        }
    }
    
    return EXIT_SUCCESS;
}
