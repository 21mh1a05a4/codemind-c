#include<stdio.h>
#include<math.h>
int main()
{
    double p,t,r,a,m;
    scanf("%lf%lf%lf",&p,&r,&t);
    a=1+r/100;
    m=p*pow(a,t);
    printf("%.2lf",m);
    
}