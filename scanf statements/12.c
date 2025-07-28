//Verify the formula t=((v+s) +(l-m)*l)
#include<stdio.h>
int main()
{
    int t,v,s,l,m;
    printf("enter the value of v,s,l,m");
    scanf("%d%d%d%d",&v,&s,&l,&m);
    t=((v+s)+(l-m)*l);
    printf("The value of t=%d",t);
}