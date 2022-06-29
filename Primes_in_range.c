#include<stdio.h>
#include<math.h>
int main()
{
  int i,n,c1,c;
  int l,r;
  scanf("%d",&l);
  scanf("%d",&r);
  c=0;
  for(n=l;n<=r;++n)
  {
      if(n==1)
      {
          continue;
      }
      c1=0;
      for(i=2;i<=sqrt(n);++i)
      {
          if(n%i==0)
          {
              c1=1;
              break;
          }
      }
      if(c1==0)
      {
          ++c;
      }
  }
  printf("%d",c);
}