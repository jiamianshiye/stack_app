#include <stdio.h>
#include "mystack.h"

SqStack s;

int num_to_hex(int num)
{
    SElemType val;
    InitStack(s); 
    while(num)
    {
        Push(s, num % 16); 
        num = num / 16;
    }
    printf("0x");
    while(!StackEmpty(s))
    {
        Pop(s, val); 
        printf("%x", val);
    }
    putchar('\n');

    return 0;
}
