//Input a Rupees and prints its value converted into Dollar.
#include<stdio.h>
int main()
{
    float r,d;
    printf("Enter the value of the rupees:");
    scanf("%f",&r);
    d=(r/83);
    printf("The value in dollar is %f",d);
}