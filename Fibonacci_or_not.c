#include<stdio.h>
int main()
{
    int n,a,b,i,sum;
    scanf("%d",&n);
    a=0;
    b=1;
    for(i=2;i<=n;i++)
    {
        sum=a+b;
        if(n==sum)
        {
            printf("True");
            break;
        }
        a=b;
        b=sum;
    }
    if(n!=sum)
    {
        printf("False");
    }
}