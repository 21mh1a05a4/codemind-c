#include<stdio.h>
int main()
{
    int x,y,i,z;
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    {
        if(i%2!=0)
        {
            z=x*i;
            printf("%d x %d = %d",x,i,z);
            printf("
");
        }
    }
}