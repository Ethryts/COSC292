#include <stdio.h>
#include <stdlib.h>
#include "file_io.h"

void testOpenClose()
{
    int iErr= demoOpenClose("foo.txt", "f");
    printf("the error number returned was %d\n", iErr);
}


void testRead()
{
    int iErr = demoRead("foo.txt", "r");
    printf("the error number returned was %d\n", iErr);
}

int main(){
    // testOpenClose();
    testRead();
    return EXIT_SUCCESS;
}
