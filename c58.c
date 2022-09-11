#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int r,c;

for(r=1;r<=5;r++)
{
for(c=1;c<=r;c++)
{
printf("%d",r);
}
printf("\n");
}

for(r=4;r>0;r--)
{
for(c=1;c<=r;c++)
{
printf("%d",r);
}
printf("\n");
}
  return 0 ;
}
    