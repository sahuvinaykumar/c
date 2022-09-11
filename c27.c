#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int n,qb,rm,s,dm,r;

printf("enter no ");
scanf("%d",&n);

if(n>99&&n<1000)
{dm=n;
for(s=0;n!=0;n=n/10)
{
rm=n%10;
qb=pow(rm,3);
s=s+qb;
}
if(s==dm)
{
printf("Armstrong no\n");
}
else
{
printf("not Armstrong no\n");
}
}
else
{
printf("no is %d\n",n);
}
  return 0 ;
}
    