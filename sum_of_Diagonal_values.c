#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int a[100][100],i,j,sum,s1=0,s2=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(r==c)
    {
        for(i=0;i<r;i++)
        {
        for(j=0;j<c;j++)
        {
           if(i==j)
           {
               s1+=a[i][j];
           }
           if(i!=j)
           {
               if(i+j==r-1)
               {
                   s2+=a[i][j];
               }
           }
        }
        
    }
    sum=s1+s2;
    printf("%d",sum);
}
}