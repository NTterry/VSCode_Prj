#include "stdio.h"
#include "./show.h"

int main(void)
{
 //   printf("hello world\r\n");
    int i = 0;

    while(++i < 11)
    {
        vpf();
    }
    
    getchar();
    return 0;
}