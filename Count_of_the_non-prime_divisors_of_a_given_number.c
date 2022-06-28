#include<stdio.h>
int main()
{
    int n,i,j,count=0,count1=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    count++;
                }
            }
            if(count!=2)
            {
                count1++;
            }
            count=0;
        }
    }
    printf("%d",count1);
}