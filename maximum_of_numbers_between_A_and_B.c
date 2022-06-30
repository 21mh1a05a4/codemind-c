#include<stdio.h>
int main()
{
    int n,max=0,c=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int A,B;
    scanf("%d%d",&A,&B);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=A && arr[i]<=B)
        {
            if(max<arr[i])
            {
                max=arr[i];
                c++;
            }
        }
    }
    if(c!=0)
    {
        printf("%d",max);
    }
    else
    {
        printf("-1");
    }
}