//Write a program to count the simple interest.
#include<stdio.h>
int main()
{
    float p,r,t;
    printf("Enter the value of p,r,t:");
    scanf("%f%f%f",&p,&r,&t);
    printf("The value of the simple interest is %f",(p*r*t)/100);
}