#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int A,B;
    scanf("%d%d",&A,&B);
    for(i=0;i<n;i++)
    {
        if(A>a[i] || B<a[i])
        {
            sum=sum+a[i];
        }
    }
     printf("%d",sum);
}