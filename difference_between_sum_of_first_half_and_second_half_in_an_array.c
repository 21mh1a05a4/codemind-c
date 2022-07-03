#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum1=0,sum2=0,diff,mid=n/2;
    for(i=0;i<mid;i++)
    {
        sum1+=a[i];
    }
    for(i=mid;i<n;i++)
    {
        sum2+=a[i];
    }
    if(sum1>sum2)
    {
        diff=sum1-sum2;
    }
    else
    {
        diff=sum2-sum1;
    }
    printf("%d",diff);
}