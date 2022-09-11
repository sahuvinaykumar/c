#include <stdio.h>

int main()
{
  char nm[30];
  int cl,p,c,m,tm;
  float per;
  
  printf("enter student name ");
  scanf("%s",nm);
  printf("enter class ");
  scanf("%d",&cl);
  printf("enter pcm marks ");
  scanf("%d%d%d",&p,&c,&m);
  
  tm=p+c+m;
  per=tm/3;
  
  printf("student record\n");
  printf("name     : %s\n",nm);
  printf("class    : %d\n",cl);
  printf("physics  : %d\n",p);
  printf("chemistry: %d\n",c);
  printf("maths    : %d\n",m);
  printf("total    : %d\n",tm);
  printf("percentage: %.2f\n",per);
  
  return 0;
}