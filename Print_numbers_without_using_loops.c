#include<stdio.h>
int main()
{
    int n,i=1;
    scanf("%d",&n);
    if(n<=0||n>10000)
    {
        printf("The Number Series is Not Possible Print");
    }
    else
    {
        x:
        printf("%d ",i);
        i++;
        if(i<=n)
        {
            goto x;
        }
    }
}