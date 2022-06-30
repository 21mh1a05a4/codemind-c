#include<stdio.h>
int main()
{
    int n,arr[100],i,temp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0 && arr[i]!=1)
        {
            temp=1;
            break;
        }
    }
    if(temp==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}