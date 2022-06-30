#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],i,r,count=0,count2=0,temp;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=a[i];
        if(a[i]!=0)
        {
        count=0;
        while(temp)
        {
            r=temp%10;
            if(r==0)
            {
                count2++;
            }
            count++;
            temp=temp/10;
        }
        printf("%d ",count);
        }
        else
        {
            printf("%d ",1);
        }
            
        }
}