#include <stdio.h>
#include "pingpong.h"

void ping(void)
{
    printf("ping\n");
    pong();
    
}


void pong(void)
{
    static int iCount = 0;
    iCount++;
    printf("pong\n");
    if(iCount < 10)
    {
        ping();
    }
}
