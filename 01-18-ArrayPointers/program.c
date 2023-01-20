#include <stdio.h>
#include <stdlib.h>
#include "array_pointers.h"

void testIntArray()
{
    int iArray[] = {2 , 7 ,9 };
    intArrayPrinter(iArray, sizeof(iArray)/sizeof(int));
}

void testCharPrinter(){
    char cArray[] = "hello how are you";
    charArrayPrinterWithPointer(cArray);
}

void testBytePrinter(int iValue){
   char* cPtr = (char*) &iValue;
    for (int i =0; i< sizeof(int); i++) {
        printf("the byte value is %x and the character equivalent is %c\n", *cPtr, *cPtr);
        cPtr++;
    }
}


void testEncodeDecode()
{
    double x = encode();
    printf("%g\n", x);
}

int main()
{
    // testIntArray();
    // testCharPrinter();
    // testBytePrinter();
    testEncodeDecode();
    return EXIT_SUCCESS;
}


