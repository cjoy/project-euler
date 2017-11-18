/*  6.c: Sum square difference (ProjectEuler.NET)
    --------------------------------------------------------------
    Author: Christopher Joy
    License: GNU General Public License (GPL)
    
    Description
    --------------------------------------------------------------
    Find the difference between the sum of the squares of the
    first one hundred natural numbers and the square of the sum.
*/

#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]) {
    int sumSqr = 0;
    for (int i = 1; i <=100; i++) {
        sumSqr += i*i;
    }
    
    
    int sqrSum = 0;
    for (int i = 1; i <=100; i++) {
        sqrSum += i;
    }
    sqrSum = sqrSum*sqrSum;
    
    printf("%d - %d = %d\n", sqrSum, sumSqr, sqrSum-sumSqr);
    
    return EXIT_SUCCESS;
}
