//Verify the formula I=(c+d)*(g+h)
#include<stdio.h>
int main()
{
    int I,c,d,g,h;
    printf("enter the value of c,d,g,h: ");
    scanf("%d%d%d%d",&c,&d,&g,&h);
    I=(c+d)*(g+h);
    printf("the value of I=%d",I);
}