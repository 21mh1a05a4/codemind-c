#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j;
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0,count=0;
    for (i=0; i<n; i++)
    {
        count=1;
        for (j=0; j<n; j++)
        {
            if (i!=j)
            {
                if (a[i]==a[j] && a[i]!=-1)
                {
                    a[j]=-1;
                    count++;
                }
            }
        }
        if (count==a[i])
        {
            c++;
        }
    }
    printf("%d",c);
}