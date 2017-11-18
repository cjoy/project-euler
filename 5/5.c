/*  5.c: Smallest multiple (ProjectEuler.NET)
    ---------------------------------------------
    Author: Christopher Joy
    License: GNU General Public License (GPL)
    
    Description
    ---------------------------------------------
    What is the smallest positive number that is evenly
    divisible by all of the numbers from 1 to 20?
*/

#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]) {
    
    int found = 0;
    int num = 1;
    
    while (found != 20) {
        found = 0;
        for (int i = 1; i <= 20; i++) {
            if ((num % i) == 0) {
                found++;
            } else {
                found--;
            }
        }
        if (found == 20) {
            printf("[%d]", num);
            
        }
        num++;
    }
    
    printf("\n");
    
    return EXIT_SUCCESS;
}
