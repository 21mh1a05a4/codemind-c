#include<stdio.h>
int main()
{
    int n,e=0,o=0,c=0,temp,rem;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        c++;
        rem=n%10;
        n=n/10;
        if(rem%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if(c==e || c==o)
    {
       if(temp%2==0)
       {
           printf("Even");
       }
       else if(temp%2!=0)
       {
           printf("Odd");
       }
    }
       else
       {
           printf("Mixed");
       }
}