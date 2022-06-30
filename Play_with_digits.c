#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[100],i,sum=0,count=0,temp,r;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        while(temp>0)
        {
            r=temp%10;
            sum+=r;
            temp/=10;
        }
    }
    printf("%d",sum);
}