#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    j=0;
    for(i=n-1;i>=0;i--)
    {
        sum+=arr[i]*pow(2,j++);
    }
    printf("%d",sum);
}