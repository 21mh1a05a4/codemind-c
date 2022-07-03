#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]!=-1)
                {
                    if(a[i]==a[j])
                    {
                        c++;
                        a[j]=-1;
                    }
                }
            }
        }
        if(a[i]!=-1)
        {
            printf("%d %d ",a[i],c);
        }
    }
}