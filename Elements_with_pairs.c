#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    if(n%2!=0)
    {
        printf("0");
    }
}