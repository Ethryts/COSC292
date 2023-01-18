#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void readStringGets(char* cPtr);
void printString(char* cPtr);

int main()
{
    // char cArray[10];
/*     int iReturns; */

    /* Test 1 - user scanf to input a string
    printf("Enter a string: ");
    iReturns = scanf("%9s",cArray);
    printf("%10s\n",cArray);
    printf("%i\n",iReturns); */

    char c = getchar();
    while(c!= '\n' && c != EOF)
    {

        printf("%c", c);
        c = getchar();
    }
    // readStringGets(cArray);
    // printString(cArray);

    return EXIT_SUCCESS;


}


int readNumbers() {
    int num, count = 0;
    while (scanf("%d", &num) == 1){
        count++;
    }
    return count;
}




void printNumbers(int* iPtr, int iSize)
{
    printf("The numbers to be printed are:\n");
    for(int i=0;i<iSize; i++)
        {
            printf("%d\n",iPtr[i]);
        }
}

void readString(char* cPtr, char* cLengthptr)
{
    char cFormat[4];
    cFormat[0] = '\0';
    strcat(cFormat, "%");
    strcat(cFormat, cLengthptr);
    strcat(cFormat, "s");
    printf("Enter a string: ");
    
    printf("%d",scanf(cFormat, cPtr) );

}

void readStringGets(char* cPtr)
{
    printf("Enter a big honking string: ");
    // gets(cPtr);
}

void printString(char* cPtr)
{
    printf("The result of reading the string is:\n %s\n", cPtr);
}
