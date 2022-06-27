#include<stdio.h>
int prime(int num)
{
    int i,count=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
        if(count==2)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,i,j,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i*j==n)
            {
                if(prime(i)==1 && prime(j)==1)
                {
                    printf("%d %d",i,j);
                    s=1;
                }
            }
            if(s==1)
            {
                break;
            }
        }
    }
    if(s==0)
    {
        printf("-1");
    }
}