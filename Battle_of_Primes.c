#include<stdio.h>
int main()
{
    int n1,n2,s,i,j,count=0;
    scanf("%d %d",&n1,&n2);
    s=n1+n2;
    for(i=1;i<1000;i++)
    {
        s=s+1;
        for(j=1;j<=s;j++)
        {
            if(s%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            break;
        }
        else
        {
            count=0;
        }
    }
    printf("%d",i);
}