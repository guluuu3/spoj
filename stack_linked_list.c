#include<stdlib.h>
#include<stdio.h>
#define STACKSIZE 100
struct stack
{
int top;
int item[STACKSIZE];
};
void push(struct stack *ps,int x)
{
if(ps->top==STACKSIZE-1)
{
printf("stack overflow");
exit(0);
}
ps->top+=1;
int top=ps->top;
ps->item[top]=x;
}
int pop(struct stack *ps)
{
int temp;
if(ps->top==-1)
{
printf("stack underflow");
exit(0);
}
int top=ps->top;
 temp=ps->item[top];
 ps->top-=1;
 return temp;
}
bool isEmpty(struct stack *ps)
{
    return (ps->top == -1)? true : false;
}
int main()
{
    int i,element;
struct stack s;
s.top=-1;
int arr[]={10,20,13,5,34};
for(i=0;i<5;i++)
{
push(&s,arr[i]);
}
for(i=0;i<5;i++)
{
element=pop(&s);
printf("%d\t",element);
}
return 0;
}
