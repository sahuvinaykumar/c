#include <stdio.h>

int main()
{
  char nm[30];
  int qt,rp,ta;
  float dis,na;
  
  printf("enter product nm ");
  scanf("%s",nm);
  printf("quantity ");
  scanf("%d",&qt);
  printf("rate per product ");
  scanf("%d",&rp);
  ta=qt*rp;
  dis=ta*0.15;
  na=ta-dis;
  
  printf("product nm : %s\n",nm);
  printf("quantity   : %d\n",qt);
  printf("rpp        : %d\n",rp);
  printf("net amount : %.2f\n",na);
  return 0;
}