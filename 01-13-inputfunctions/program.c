#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char cArray[10];
    int iReturns;

    // Test 1 - user scanf to input a string
    printf("Enter a string: ");
    iReturns = scanf("%9s",cArray);
    printf("%10s\n",cArray);
    printf("%i\n",iReturns);
    return EXIT_SUCCESS;

}


int readNumbers() {
    int num, count = 0;
    while (scanf("%d", &num) == 1){
        count++;
    }
    return count;
}




void readString(char* cPtr, char* cLengthptr)
{
    char cFormat[4];
    cFormat[0] = '\0';
    strcat(cFormat, "%");
    strcat(cFormat, cLengthptr);
    strcat(cFormat, "s");
    printf("Enter a string: ");
    scanf(cFormat, cPtr);

}

void printString(char* cPtr)
{
    printf("The result of reading the string is:\n %s\n", cPtr);
}
