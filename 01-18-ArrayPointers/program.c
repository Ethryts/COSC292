#include <stdio.h>
#include <stdlib.h>
#include "array_pointers.h"

void testIntArray()
{
    int iArray[] = {2 , 7 ,9 };
    intArrayPrinter(iArray, sizeof(iArray)/sizeof(int));
    
    
}


int main()
{
    testIntArray();
    return EXIT_SUCCESS;
}




