#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/** Seed the random number generator with the current time
* Generate a random number between -100 and 100
*Return: Always (Success) 
*/

int main(void) {
   
    int n;
    
    srand(time(NULL));
    n = rand() % 201 - 100;

    printf("The number %d is ", n);

    if (n > 0) {
        printf("positive\n");
    } else if (n < 0) {
        printf("negative\n");
    } else {
        printf("zero\n");
    }

    return 0;
}
