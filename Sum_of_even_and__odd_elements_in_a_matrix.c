#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int a[100][100],i,j,sum=0,sum1=0,x;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]%2==0)
            {
                sum=sum+a[i][j];
            }
            else
            {
                sum1=sum1+a[i][j];
            }
        }
    }
    printf("%d %d",sum,sum1);
}