#include<stdio.h>
int main()
{
    int x,y,i,j,r,count=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&x,&y);
        for(j=x;j<=y;j++)
        {
            r=j%10;
            if(r==2 || r==3 ||r==9)
            {
                count=count+1;
                
            }
        }
         printf("%d
",count);
         count=0;
    }
   
}