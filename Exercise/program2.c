#include <stdio.h>
#include <stdlib.h>



void swap( int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("%d\n",*p1);
    
}

void testSwap(){
    int x = 10;
    int y = 20;
    swap(&x , &y);
    printf("x %d y: %d\n", x,y);
}

// int newInteger()
// {
//     int x = 10;
//     return &x;
// }
//
//

void hideString( int * iArrPtr, char * cArrPtr)
{
    for (int i = 0; i<4; i++) {
        printf("%d\n", *(iArrPtr+(sizeof(int)*i)));
    
    }



    



    
}

int main(int argc, char *argv[])
{
    char b[4] = "absd";
    int a[4];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    hideString(a,b);

    
    // testSwap();

    return EXIT_SUCCESS;
}
