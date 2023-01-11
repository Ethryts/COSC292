#include <stdio.h>
#include "memory.h"


int memoryMap(float x){
    static int i = 0;
    int a = 1235257896;
    double d = 9.0;
    float b = 3.2f;
    char c = 'a';
    short s = 10814;
    char cArray[] = "Hello";
    // print the address of each variable the 
    // The address of operator is the overloaded & sign

    printf("The address of int i is \t%p\n", &i);
    printf("The address of int a is \t%p\n", &a);
    printf("The address of double d is \t%p\n", &d);
    printf("The address of flaot b is \t%p\n", &b);
    printf("The address of char c is \t%p\n", &c);
    printf("The address of short s is \t%p\n", &s);
    printf("The address of string cArray is \t%p\n", &cArray);





    printf("The address of float x is \t%p\n", &x);

    printf("The address of memoryMap is \t %p\n", memoryMap);




    return 0;
}
