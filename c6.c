#include <stdio.h>

int main()
{
  int a,b,c,s,p,sq;
  s=0;
  printf("enter 3 no ");
  scanf("%d%d%d",&a,&b,&c);
  
  s=a+b;
  p=b*c;
  sq=b*b;
  
  printf("sum is %d\n",s);
  printf("product is %d\n",p);
  printf("square is %d\n",sq);
  
  return 0;
}