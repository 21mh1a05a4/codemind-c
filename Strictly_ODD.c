#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0;
    for (i=0; i<n; i++)
    {
        if (a[i]%2!=0 && i%2!=0)
        {
            c=1;
        }
        else if (a[i]%2!=0 && i%2==0)
        {
            c=0;
            break;
        }
    }
    if (c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
   
}