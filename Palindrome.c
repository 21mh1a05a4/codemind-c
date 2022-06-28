#include<stdio.h>
int main()
{

    int x,r,rx=0,temp;
    scanf("%d",&x);
    temp=x;
    while(temp)
    {
        r=temp%10;
        rx=(rx*10)+r;
        temp=temp/10;
    }
       if(x==rx)
       {
           printf("True");
       }
       else
       {
           printf("False");
       }
    
}