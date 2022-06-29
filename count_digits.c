#include<stdio.h>
int main()
{
    int n,rem,temp,c=0,c1=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        if(arr[i]!=0)
        {
            c=0;
            while(temp)
            {
                rem=temp%10;
                if(rem==0)
                {
                    c1++;
                }
                c++;
                temp/=10;
            }
            printf("%d ",c);
        }
        else
        {
            printf("%d ",1);
        }
    }
}