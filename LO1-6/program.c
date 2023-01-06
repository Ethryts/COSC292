#include <stdio.h>
#include <stdlib.h>

#define PI 3.14156

int primitiveTypes()
{
    char c = 'A';
    int x = 4276803;
    float f = PI;
    double d = 12345.6789;

    printf("The value of c is %c\n", c);
    printf("The value of c as and int is %d\n", c);
    printf("The value of x is %d\n",x);
    printf("The value of x as a char is %c\n",x);
    printf("The value of x as a hex is %x\n",x);


    printf("The value of d is %10.2f\n" , d);
    printf("The value of f is %10.2f\n" , f);


    printf("The size of a char is %zu\n", sizeof(c));
    printf("The size of a int is %zu\n", sizeof(x));
    printf("The size of a float is %zu\n", sizeof(f));
    printf("The size of a double is %zu\n", sizeof(d));




    return 0;
}

void modifiers()
{
    // Note that c defaults to signed values except for char
    unsigned char e = 255;
    signed char c = 127;

    printf("The value of e is %d\n",e);
    printf("The value of c is %d\n",c);

    e = e+1;
    c+=1;
    printf("The value of e is %d\n",e);
    printf("The value of c is %d\n",c);
    printf("We also have modifiers for short and long int values\n");

    short int x;
    long int z;

    printf("The size of a short is %zu\n", sizeof(x));
    printf("The size of a long is %zu\n", sizeof(z));
    //Short and long may varry depeding on the system
    //but short<=int<=long  
    //short must be at least 16 bits
    //and long must be at least 32 bits
    long f;
    long double d;

    printf("The size of a long is %zu\n", sizeof(f));
    printf("The size of a long double is %zu\n", sizeof(d));

}

int main(int argc, char* argv[])
{
    printf("hello\n");
    //primitiveTypes();
    modifiers();
    return 0;
}
