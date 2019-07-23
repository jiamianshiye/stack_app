#include "mystack.h"
#include "common.h"

 

Status InitStack(SqStack &s)
{
    s.base = (SElemType *)malloc(STACK_INIT_SIZE * sizeof(SElemType));
    if(s.base == NULL)
    {
        printf("%s Cannot malloc for base!\n", __func__);
        return -1;
    }
    s.top = s.base;
    s.stackSize = STACK_INIT_SIZE;
    return 0;
}

Status DestyStack(SqStack &s)
{
    free(s.base);
    memset(&s, 0, sizeof(SqStack));
    return 0;
}

Status ClearStack(SqStack &s)
{

}

Status StackEmpty(SqStack s)
{
    if(s.top == s.base)
    {
        return 1; 
    }
    return 0;

}

Status StackLength(SqStack s)
{

}

Status GetTop(SqStack s, SElemType &e)
{
    if(s.base == s.top)
    {
        printf("%s Stack is empty!\n", __func__);
        return -1;
    }
    e = *(s.top - 1);

    return 0;
}

Status Push(SqStack &s, SElemType e)
{
    if(s.top - s.base >= s.stackSize)
    {
        s.base = (SElemType *)realloc(s.base, (s.stackSize + STACKINCREMENT) * sizeof(SElemType));
        if(s.base == NULL)
        {
            printf("%s realloc failed!\n", __func__);
            return -1;
        }
    }
    *s.top++ = e;
    return 0;
}

Status Pop(SqStack &s, SElemType &e)
{
    if(s.top == s.base)
    {
        printf("%s Stack is empty ,cannot pop element!\n", __func__);
        return -1;
    }
    e = *--s.top;
    return 0;
}

Status StackTraverse(SqStack s, Status (*visit)())
{
    
}
