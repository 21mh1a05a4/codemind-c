#include<stdio.h>
int main()
{
    int x,i,sum=0;
    scanf("%d",&x);
    for(i=1;i<x;i++)
    {
       if(x%i==0)
       {
           sum=sum+i;
       }
    }
    if(sum>x)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}