#include<stdio.h>
int main()
{
    int n,A,B,c=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&A,&B);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=A && arr[i]<=B)
        {
            printf("%d ",arr[i]);
            c+=1;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    
}