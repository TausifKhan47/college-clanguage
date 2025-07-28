//Input two numbers and prints its square and cube.
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a and b :");
    scanf("%d%d",&a,&b);
    printf("The square of the number %d is %d:\n",a,a*a);
    printf("The square of the number %d is %d:\n",b,b*b);
    printf("The cube of the number %d is %d:\n",a,a*a*a);
    printf("The cube of the number %d is %d:\n",b,b*b*b);
}