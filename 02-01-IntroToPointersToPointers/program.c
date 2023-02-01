#include <stdio.h> 

int count_chars(const char* cPtr, char cSeek)
{
    int iCount = 0;
    while (*cPtr != '\0')
    {
        if(*cPtr == cSeek)
        {
            iCount++;
        }
        cPtr++;
    }
    return iCount;
}


char* find_last_char(const char* cPtr, char cSeek, char** cPtrToLastPtr)
{

    char* cFoundPtr = NULL;
    *cPtrToLastPtr = NULL;

    while (*cPtr != '\0')
    {
        if(*cPtr == cSeek)
        {
            cFoundPtr = cPtr;
        }
        cPtr++;
    }
    return cFoundPtr;
}

int find_and_count_last_char(const char* cPtr, char cSeek)
{

    char* cLastPtr = NULL;
    int iCount = 0;
    while (*cPtr != '\0')
    {
        if(*cPtr == cSeek)
        {
            cLastPtr = cPtr;
            iCount++;
        }
        cPtr++;
    }
    return iCount;
}

int main()
{
    char cTestString[] = "It's a beautiful day, isn't it?";
    int iCount;
    char* cLastPosition = NULL;
    iCount = count_chars(cTestString, 'b');
    printf("There are %d instances of the character b", iCount);
    cLastPosition = find_last_char(cTestString, 'a');
    printf("The last occurance of %c is %p", *cLastPosition, cLastPosition);

}
