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
    int k;
    scanf("%d",&k);
    int sum=0;
    for(i=0;i<n;i++)
    {
       sum+=a[i];
       if(a[i]==k)
       {
           break;
       }
    }
    printf("%d",sum);
}