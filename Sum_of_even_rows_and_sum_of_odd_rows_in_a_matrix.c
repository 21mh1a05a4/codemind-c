#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[100][100],i,j,sum=0,sum1=0;
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
            if(i%2==0)
            {
                sum+=a[i][j];
            }
            else
            {
               sum1+=a[i][j];   
            }
        }
    }
    printf("%d %d",sum,sum1);
}