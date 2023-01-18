#include <stdio.h>
#include <stdlib.h>

void intArrayPrinter(int *arrayPtr, int iSize)
{
    for (int i= 0; i<iSize; i++) {
        printf("%d\n", *arrayPtr++);
    }
}
