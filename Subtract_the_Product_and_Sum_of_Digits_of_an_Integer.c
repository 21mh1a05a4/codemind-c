#include<stdio.h>
int main()
{
    int num,rem,sum=0,pro=1;
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        pro=pro*rem;
        num=num/10;
    }
    printf("%d",pro-sum);
}