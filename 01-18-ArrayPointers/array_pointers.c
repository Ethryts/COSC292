#include "array_pointers.h"
#include <stdio.h>
#include <stdlib.h>

void intArrayPrinter(int *arrayPtr, int iSize)
{
    for (int i= 0; i<iSize; i++) {
        printf("%d\n", *arrayPtr++);
    }
}

void charArrayPrinterWithPointer(char *arrayPtr)
{
    while (*arrayPtr != '\0') {
        putchar(*arrayPtr++);
    }
    putchar('\n');
}

double encode()
{
    double x = 0.0;
    char* cNamePtr = (char*)&x;
    printf("Enter a 3-letter name:");
    scanf("%3s", cNamePtr + NAME_SIZE);
    printf("Enter an age(less than 128): ");
    scanf("%d", (int*)(cNamePtr+NAME_SIZE));
    return x;

}


void decode(double x){
    char* cNamePtr = (char*)&x;

    printf("the name is %s\n", cNamePtr);

    printf("The age is %d\n", *cNamePtr + NAME_SIZE);

}

