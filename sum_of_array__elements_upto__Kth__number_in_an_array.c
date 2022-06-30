#include<stdio.h>
int main()
{
    int n,k,sum=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=k)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
}