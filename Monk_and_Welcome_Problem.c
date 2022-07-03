#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],b[100],sum=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i]+b[i];
    
    printf("%d ",sum);
    sum=0;
    }
    
}