#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,j;
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            if(n==j*j)
            {
                printf("True");
                break;
            }
        }
        if(n!=j*j)
        {
            printf("False");
        }
        printf("
");
    }
}