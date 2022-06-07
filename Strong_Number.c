#include<stdio.h>
int main()
{
    int n,sum=0,i,fact,r,num;
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
        r=n%10;
        fact=1;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n/=10;
    }
    if(num==sum)
    {
        printf("The number %d is a strong number",num);
    }
    else
    {
        printf("The number %d is not a strong number",num);
    }
}