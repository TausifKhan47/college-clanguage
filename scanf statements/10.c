//Verify the formula s=((4*a+c)-2*a*b)/100
#include<stdio.h>
int main()
{
    float s,a,c,b;
    printf("enter the value of a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    s=((4*a+c)-2*a*b)/100;
    printf("The value of s=%f",s);
}