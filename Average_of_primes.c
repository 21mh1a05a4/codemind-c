#include<stdio.h>
int main()
{
    int n,j,fact,sum=0;
    float c=0.0,avg;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        fact=0;
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                fact++;
            }
        }
        if(fact==2)
        {
            sum+=arr[i];
            c++;
        }
    }
    avg=sum/c;
    printf("%.2f",avg);
}