#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    int a[100],i,count,c=0,temp,r,s;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        if(a[i]<0)
        {
            a[i]=a[i]*-1;
        }
        temp=a[i];
        if(a[i]==0)
        {
            count++;
        }
        else
        {
            while(temp>0)
            {
                r=temp%10;
                count++;
                temp/=10;
            }
        }
        if(count==x)
        {
            c++;
        }
    }
    printf("%d",c);
}