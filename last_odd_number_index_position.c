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
    int index=0;
    for (i=0; i<n; i++)
    {
        if (a[i]%2!=0)
        {
            index=i;
        }
    }
    printf("%d",index);
}