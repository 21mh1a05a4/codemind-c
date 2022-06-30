#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*arr,j,fact=0;
    int c=0;
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(n));
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
            c++;
        }
    }
    printf("%d",c);
    
}