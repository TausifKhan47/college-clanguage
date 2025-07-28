// Print value of I and check i is less, equal or greater than zero.
#include<stdio.h>
int main()
{
    int i;
    printf("enter the value of i:");
    scanf("%d",&i);
    if(i>0)
    {printf("i is greater than zero");}
    else if(i<0)
    {printf("i is less than zero");}
    else
    {printf("i is equals to zero");}
}