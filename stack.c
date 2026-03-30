#include<stdio.h>
#include<stdlib.h>
#define MS 5
typedef struct stack
{
    int top;
    int arr[MS];
    int size;
}stack;
void init(stack*s)
{
    s->size=0;
    s->top=-1;
}
void push(stack*s,int x)
{
    if(s->top==MS-1)
    {
        printf("ISSE JYADA NAHI YAAR");
    }return;
}