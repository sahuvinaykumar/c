#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int n,qb,rm,s,dm,r;

printf("enter no ");
scanf("%d",&n);

if(n>9&&n<100)
{dm=n;
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
}
else
{
printf("no is %d\n",n);
}
  return 0 ;
}
    