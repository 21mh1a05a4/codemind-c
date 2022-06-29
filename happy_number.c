#include<stdio.h>
int happy(int n)
{
    int temp,r,sum=0;
    temp=n;
    while(temp)
    {
        r=temp%10;
        sum+=r*r;
        temp/=10;
    }
    if(sum>=10)
    {
        happy(sum);
    }
    else
    {
        if(sum==1 || sum==7)
        {
            return 1;
        }
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    if(happy(n))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}