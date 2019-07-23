#ifndef MYSTACK_H
#define MYSTACK_H

typedef     int     Status;

#define     STACK_INIT_SIZE     100
#define     STACKINCREMENT      10

#define     SElemType   char

typedef struct{
    SElemType   *base;
    SElemType   *top;
    int         stackSize;
}SqStack;


Status InitStack(SqStack &s);

Status DestyStack(SqStack &s);

Status ClearStack(SqStack &s);

Status StackEmpty(SqStack s);

Status StackLength(SqStack s);

Status GetTop(SqStack s, SElemType &e);

Status Push(SqStack &s, SElemType e);

Status Pop(SqStack &s, SElemType &e);

Status StackTraverse(SqStack s, Status(*visit)());



#endif // MYSTACK_H
