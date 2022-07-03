#include<stdio.h>
int main()
{
    int n,i,j,count1=0,count2=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    count1++;
                }
            }
            if(count1!=2)
            {
                count2++;
            }
            count1=0;
        }
    }
    printf("%d",count2);
    
}