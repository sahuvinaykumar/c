#include <stdio.h>

int main()
{
  char c;
  int cd;
  printf("enter any character ");
  fflush(stdin);
  scanf("%c",&c);
  printf("ASCII value of %c is %d\n",c,c);
  
  printf("enter any code ");
  fflush(stdin);
  scanf("%d",&cd);
  printf("ASCII code of %d is %c\n",cd,cd);
  
  
  return 0;
}