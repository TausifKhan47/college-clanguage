//Input a Number of Chairs and its Total Cost and Prints the Cost of Each chair.
#include<stdio.h>
int main()
{
    float n,t;
    printf("Enter the number of the chairs:");
    scanf("%f",&n);
    printf("Enter the total cost of the chairs:");
    scanf("%f",&t);
    printf("The cost of each chair is %f",(t/n));
}