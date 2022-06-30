#include<stdio.h>
int main()
{
    int n,k,c=0;
    scanf("%d%d",&n,&k);
    int arr[100],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%k==0)
        {
            c++;
        }
    }
    printf("%d",c);
}