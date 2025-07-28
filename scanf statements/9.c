//Verify the formula x=((k-4)*(a*4))/100
#include<stdio.h>
int main()
{
    float x,k,a;
    printf("enter the value of k and a:");
    scanf("%f%f",&k,&a);
    x=((k-4)*(a*4))/100;
    printf("The value of x=%f",x);
}