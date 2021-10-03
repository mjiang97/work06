#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[10]; // #1 creates array that can store 10 ints 
    array[0] = 0; // #2 sets the first value to 0
    srand(time(NULL)); // initializes random number generator 
    int i;

    for(i=1;i<10;i++) { // populates array with random numbers
        array[i] = rand();
    }

    for(i=0;i<10;i++) {
      printf("%d\n", array[i]);
    }
    printf("\n");

    int array2[10]; // #4 creates another array that can store 10 ints
    int *pointer = array; // #5
    int *pointer2 = array2;

    printf("Using [] \n");
    for(i=9;i>=0;i--) {
        array2[i] = array[9-i];
    }

    for(i=0;i<10;i++) {
        printf("%d\n", array2[i]);
    }
    printf("\nUsing *\n");

    for(i=9;i>=0;i--) {
        *(array2+i) = *(array+9-i);
    }

    for(i=0;i<10;i++) {
        printf("%d\n", array2[i]);
    }

    return 0;
}