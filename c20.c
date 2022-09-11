#include <stdio.h>
#include<conio.h>
#include<math.h>

int main()
{char c;
printf("enter any character ");
fflush(stdin);
scanf("%c",&c);

if(c>=65&&c<=90)
{
printf("enter character is in upper case");
}
else
{
printf("enter character is not in upper case");
}
  return 0 ;
}
