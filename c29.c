#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int n,qb,rm,s,dm,ch,r;
printf("enter no ");
scanf("%d",&n);

printf("1.pallindrum\n");
printf("2.reverse\n");

printf("enter your choice ");
scanf("%d",&ch);
dm=n;

switch(ch)
{
case 1:
{
for(s=0;n!=0;n=n/10)
{
rm=n%10;
s=s*10+rm;
}
if(s==dm)
{
printf("pallindram no\n");
}
else
{
printf("not pallindram no\n");
}
break ;
}
case 2:
{
for(s=0;n!=0;n=n/10)
{
rm=n%10;
s=s*10+rm;
}

printf("reverse no is %d\n",s);
break;
}

default:
{
printf("invalid choice");
}
}


  return 0 ;
}
    