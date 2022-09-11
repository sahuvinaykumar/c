#include <stdio.h>

int main()
{
  int a,b,q,r;
  printf("enter no ");
  scanf("%d%d",&a,&b);
  q=a/b;
  r=a%b;
  printf("quotient is %d\n",q);
  printf("remainder is %d\n",r);
  return 0;
}