#include<stdio.h>
int main()
{
    int n,s=0,i;
    scanf("%d",&n);
    int a[100],c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    while(i<n)
    {
        if(a[i]<a[i+1])
        {
            s=s+1;
        }
        if(a[i]>a[i+1])
        {
            c=c+1;
        }
        i=i+2;
    }
    if(s==n/2 or c==n/2)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}