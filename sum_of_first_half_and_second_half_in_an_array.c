#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,sum1=0,sum2=0,mid=n/2;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<mid;i++)
    {
        sum1=sum1+a[i];
    }
    for(i=mid;i<n;i++)
    {
        sum2=sum2+a[i];
    }
    printf("%d
%d",sum1,sum2);
}