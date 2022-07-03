#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    int max=-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
}