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

void castDemo()
{
    int x;
    float y = 3.2f;
    float fahr = 115;
    float celc;

    x=y;
    printf("the value of x i %d\n",x);
    printf("The temp in fahrenheit is %f\n",fahr);
    celc =  (5.0f/9) * (fahr -32);
    printf("The temp in Celsius is %f\n",celc);

}

void booleanDemo()
{
    int a = 3;
    char s3[10] = "test";
    printf("%d\n", (a>3));
    char* cPtr;

    //any non-zero int is considrerd to be true
    if(a){
        printf("a is true");
    }

    int i;
    for (i = 0; s3[i]; i++);
    printf("The length of the string is %d\n",i);
    cPtr = s3;// assigns the address of s3 to the pointer
    printf("The address of the s3 is %p\n", s3);
    printf("The address of the s3 is %p\n", &s3); // This gives us the address of the array, this is the same as the default printing of array
    printf("The value of the cPnt is %p\n", cPtr);
    printf("The value that cPtr is pointing to is %c\n", *cPtr);// This defererences the pointer giving us t the value at that address in memory
    printf("The first value in s3 is %c\n",  s3[0]);
    printf("The first value in s3 is %c\n",  *s3);

    printf("walking the pointer \n");
    for(i = 0; *cPtr; i++)
    {
        printf("%c",  *cPtr);
        cPtr++;
    }

    printf("\nFinished Walking\n");

}

void stringDemo()
{
    // There are no string primitives in C
    char myChar = 'm';
    char s1[] = "William"; //
    // char s2[4];

    printf("The value of mychar is %c\n", myChar);
    printf("The value of s1 is %s\n", s1);
    printf("This size of s1 is %zu\n", sizeof(s1));
    // The last char is the null value to mark the end of the string
    // you cannot assign string
    // s2 = "Bob"will error out
    // s2[0] = "B";
    // s2[1] = "O";
    // s2[2] = "B";
    // s2[2] = "\0";
    // you must assign the null \0 char or else it will break
    // printf("bob = %s", s2)

    



}



void demoConstants()
{
    // Note keyword cosnt
    const float pi = 3.14159f;
    printf("the value of pi is %f\n", pi);
}

int main(int argc, char* argv[])
{
    printf("hello\n");
    //primitiveTypes();
    // modifiers();
    // castDemo();
    // demoConstants();
    // stringDemo();
    booleanDemo();
    return 0;
}
