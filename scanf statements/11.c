//Verify the formula a=p*(1 +(r/100)/n)-p
#include<stdio.h>
int main()
{
    float a,p,r,n;
    printf("Enter the value of p,r,n");
    scanf("%f%f%f",&p,&r,&n);
    a=p*(1 +(r/100)/n)-p;
    printf("The value of a=%f",a);
}