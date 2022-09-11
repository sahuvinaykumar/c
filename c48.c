#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int r,c,n;
printf("enter no ");
scanf("%d",&n);

for(r=n;r>0;r--)
{
for(c=1;c<=r;c++)
{
printf("*");
}
printf("\n");
}
  return 0 ;
}
    