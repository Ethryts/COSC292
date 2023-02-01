#include <stdio.h>
#include <stdlib.h>
#include  <errno.h>
#include  <string.h>
#include "file_io.h"

int demoOpenClose(const char* cFileName, const char* cFileMode){

    FILE* filePtr = NULL;
    int iErr = EXIT_SUCCESS;

    filePtr = fopen(cFileName, cFileMode);
    printf("%s Attempting to open.\n", cFileName);
    if (filePtr != NULL)
    {
        fclose(filePtr);
        printf("%s was successfully opened and closed .\n", cFileName);

    }
    else {
        iErr = errno;
        printf("Error accessing file %s : %s\n", cFileName, strerror(iErr));
    }


    return iErr;
}



int demoRead(const char* cFileName, const char *cFileMode)
{

    FILE* filePtr = NULL;

    // a variable to store potential error codes
    int iErr = EXIT_SUCCESS;

    // Create two variables
    int intChar, retVal;
    char cBuffer[MAX_SIZE];
    char* retPtr = NULL;
    /*
    all read operations read data from the file to the memory location
    only fgets adds an addition null terminator to the data in the buffer
    Return types vary so testing for success depends on the function used
    fscanf/fread - return the number of times assigned or read
    fscanf returns EOF markers if a failure occurs before the first assignemnt
    fgets - returns a pointer to the string read or NULL 
    fgetc - returns the character or EOF indicator
    */
    if ((filePtr = fopen(cFileName, cFileMode)) != NULL)
    {
        //some various ways of reading from a file
        // retVal = fscanf(filePtr, "%s", cBuffer); // Quites reading at the first whitespace
        retPtr = fgets(cBuffer, MAX_SIZE, filePtr);
        // if (retVal > 0){
        if (retPtr > 0){
                printf("retVal: %d\n", retVal);
                printf("%s \n", cBuffer);
            }
            else{
                if (iErr == ferror(filePtr))
                {
                    printf("error reading from the file %s: %s \n", cFileName , strerror(iErr));
                }
                else{
                    printf("count not retrieve data\n");
                }
            }


        fclose(filePtr);


    }
    else //failed to open file
    {
        iErr = errno;
        printf("error accessing the file %s: %s\n", cFileName, strerror(iErr));
    }
    return iErr;
}
