#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int r,c;

for(r=65;r<=70;r++)
{
for(c=65;c<=r;c++)
{
printf("%c",c);
}
printf("\n");
}

for(r=69;r>64;r--)
{
for(c=65;c<=r;c++)
{
printf("%c",c);
}
printf("\n");
}
  return 0 ;
}
    