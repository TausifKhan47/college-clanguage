//Verify the formula c=(a+b)*(a+b)
#include<stdio.h>
int main()
{
    int c,a,b;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    c=(a+b)*(a+b);
    printf("The value of the c=%d",c);
}