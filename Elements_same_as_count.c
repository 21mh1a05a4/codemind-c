#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0,j;
    for(i=0;i<n;i++)
    {
        int count=1;
        for(j=0;j<n;j++)
        {
            if(i!=j&&a[i]!=-1)
            {
                if(a[i]==a[j])
                {
                    count++;
                    a[j]=-1;
                }
            }
        }
        if(count==a[i])
        {
            printf("%d ",a[i]);
            c++;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}