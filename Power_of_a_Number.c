#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,p,s;
    scanf("%d%d%d",&x,&y,&m);
    p=pow(x,y);
    s=p%m;
    printf("%d",s);
}