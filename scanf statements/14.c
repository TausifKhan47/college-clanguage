//Calculate the area of Triangle.
#include<stdio.h>
int main()
{
    float b,h;
    printf("Enter the value of the base and height:");
    scanf("%f%f",&b,&h);
    printf("The area of the triangle with base %f and height %f is %f",b,h,(0.5)*b*h);
}