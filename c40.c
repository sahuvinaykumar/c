#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{char nm[30],dm[30];
int c;
printf("enter first string ");
scanf("%s",nm);

printf("enter second string ");
scanf("%s",dm);

c=strcmp(nm,dm);
if(c>0)
{
printf("%s is greater string\n",nm);
}
else if(c<0)
{
printf("%s is greater string\n",dm);
}
else
{
printf("equal string\n");
}
  return 0 ;
}
    