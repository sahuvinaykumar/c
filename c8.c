#include <stdio.h>

int main()
{
  char nm[30],cd[30];
  int uc,rpu,sm;
float sgst,cgst,ta;
  printf("enter customer nm ");
  scanf("%s",nm);
  printf("enter customer code ");
  scanf("%s",cd);
  printf("enter unit consume ");
  scanf("%d",&uc);
  printf("enter rate per unit ");
  scanf("%d",&rpu);
  
  sm=uc*rpu;
  cgst=sm*0.09;
  sgst=sm*0.09;
  ta=sm+cgst+sgst;
  
  printf("customer record \n");
  printf("name         : %s\n",nm);
  printf("code         : %s\n",cd);
  printf("unit consume : %d\n",uc);
  printf("bill amount  : %f\n",ta);
  
  return 0;
}