#include<stdio.h>
#include<math.h>
int main()
{
    float s,a,b,c,A,m;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    A=s*(s-a)*(s-b)*(s-c);
    m=sqrt(A);
    printf("%.2f",m);
}