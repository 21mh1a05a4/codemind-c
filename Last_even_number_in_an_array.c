#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],m=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            m=a[i];
        }
    }
    printf("%d",m);
}