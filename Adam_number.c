#include<stdio.h>
int main()
{
    int n,s,q,rem,rev=0,rem1,rev1=0;
    scanf("%d",&n);
    s=n*n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    q=rev*rev;
    while(q>0)
    {
        rem1=q%10;
        rev1=rev1*10+rem1;
        q/=10;
    }
    if(rev1==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}