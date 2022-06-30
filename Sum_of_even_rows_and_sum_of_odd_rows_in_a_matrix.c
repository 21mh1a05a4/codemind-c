#include<stdio.h>
int main()
{
    int r,c,se=0,so=0;
    scanf("%d%d",&r,&c);
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
            if(i%2==0)
            {
                se+=a[i][j];
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i%2!=0)
            so+=a[i][j];
        }
    }
    printf("%d %d",se,so);
}