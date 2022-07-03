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
    for (i=0; i<n; i+=2)
    {
        int val1=a[i];
        int val2=a[i+1];
        for (j=0; j<val2; j++)
        {
            printf("%d ",val1);
        }
    }
}