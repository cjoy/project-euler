/*  4.c: Largest palindrome product (ProjectEuler.NET)
    --------------------------------------------------------------
    Author: Christopher Joy
    License: GNU General Public License (GPL)
    
    Description
    --------------------------------------------------------------
    Find the largest palindrome made from the product of 
    two 3-digit numbers.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0


// Function to check if a given number is a palindrome.
int isPalindrome(int num);
char *strrev (char *str);

int main (int argc, char *argv[]) {
    int maxPal = 0;

    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 1000; j++) {
            if (isPalindrome(i*j) == TRUE) {
                printf("[%dx%d=%d] ",i,j,i*j);
                if (maxPal < i*j) 
                    maxPal = i*j;
            }
        }
    }
    printf(" [maxPal: %d]\n", maxPal);

    return EXIT_SUCCESS;
}


int isPalindrome(int num) {
    int pal = TRUE;
    int nsize = sizeof(num)-1;
    char snum[15], rsnum[15];
    snprintf(snum, 15, "%d", num);
    strcpy(rsnum, snum);
    strrev(rsnum);
    for (int i = 0; i <= nsize-1; i++) {
        if (snum[i] != rsnum[i]) {
            pal = FALSE;
        }
    }
    return pal;
}

char *strrev (char *str) {
    char c, *front, *back;

    if(!str || !*str)
        return str;
    for(front=str,back=str+strlen(str)-1;front < back;front++,back--){
        c=*front;*front=*back;*back=c;
    }
    return str;
}
