#include<stdio.h>
int main()
{
    int r,c,sum=0;
    scanf("%d %d",&r,&c);
    int a[r][c],i,j;
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
            if((i!=0 && j!=0) &&  (i!=(r-1) && j!=(c-1)))
            {
                continue;
            }
            else
            {
                sum+=a[i][j];
            }

        }
    }
    printf("%d",sum);
}