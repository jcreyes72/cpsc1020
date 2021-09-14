#include <stdio.h>

//function prototypes
void initializeArray(int size, int ids[]);
void printArray(int size, int *idPointer);


int main(void) {
    // 1.  declare an array of 5 integers called ids
    int ids[5];


    // 2.  declare an integer pointer called arrayPointer and
    //     initialize it to point to the array called ids
    int *arrayPointer;
    arrayPointer = ids;



    // 3.  call initializeArray() function sending to it
    //     5 for the size and the array called ids
    initializeArray(5, ids);




    // 4.  add 3 to the value at where arrayPointer is pointing to
    *arrayPointer = *arrayPointer + 3;



    // 5.  add 5 to the value at 2 locations past
    //     where arrayPointer is pointing to
    *(arrayPointer+2) += 5;


    // 6.  call printArray() function sending to it
    //     5 for the size and arrayPointer
    printArray(5, arrayPointer);



    return 0;
}


//  This function initializes an array ids of size "size"
void initializeArray(int size, int ids[]) {
    int i;
    for (i = 0; i < size; i++) {
        ids[i] = i * 100;
    }
}


//  This function prints an array of size "size". The array is pointed at by idPointer
void printArray(int size, int * idPointer) {
    int i;
    for (i = 0; i < size; i++) {
        // 7.  finish the code for the printf() statement
        printf("Element at index %d is %d\n", i, *(idPointer+i));
    }
}
