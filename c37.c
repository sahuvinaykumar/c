#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{char nm[30],dm[30];
int c;

printf("enter string ");
scanf("%s",nm);

strcpy(dm,nm);
strrev(dm);

c=strcmp(nm,dm);
if(c==0)
{
printf("pallindram string\n");
}
else
{
printf("not pallindram string\n");
}

  return 0 ;
}
    