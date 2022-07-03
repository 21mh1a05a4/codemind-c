#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int c1=0,c2=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                c1=c1+a[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==(n-i)-1)
            {
                c2=c2+a[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
Secondary Diagonal:%d",c1,c2);
}