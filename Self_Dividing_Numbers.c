#include<stdio.h>
int main()
{
    int a,b,i,temp,r;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        int count1=0,count2=0;
        temp=i;
        while(temp)
        {
            r=temp%10;
            count1++;
            if(r>0)
            {
                if(i%r==0)
                {
                    count2++;
                }
            }
            temp=temp/10;
        }
        if(count1==count2)
        {
            printf("%d ",i);
        }
    }
}
