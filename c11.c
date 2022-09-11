#include <stdio.h>
#include <conio.h>

int main()
{
  char c1,c2;
  printf("enter character in upper case ");
  fflush(stdin);
  scanf("%c",&c1);
  printf("character in lower case %c\n",(c1+32));
  
  getch();
  
  printf("enter any character in lower case ");
  fflush(stdin);
  scanf("%c",&c2);
  printf("character in upper case is %c\n",(c2-32));
  return 0;
}