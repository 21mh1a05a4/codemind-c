#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int ec=0,oc=0;
    for (i=0; i<n; i++)
    {
        if (a[i]%2==0)
        {
            ec++;
        }
        else
        {
            oc++;
        }
    }
    int ea[ec],oa[oc];
    int j=0,k=0;
    for (i=0; i<n; i++)
    {
        if (a[i]%2==0)
        {
            ea[j]=a[i];
            j++;
        }
        else
        {
            oa[k]=a[i];
            k++;
        }
    }
    for (i=0; i<n; i++)
    {
        if (i<ec)
        {
            printf("%d ",ea[i]);
        }
        if (i<oc)
        {
            printf("%d ",oa[i]);
        }
    }
    if (n%2!=0)
    {
        printf("0");
    }
}