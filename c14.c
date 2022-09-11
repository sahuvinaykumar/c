#include <stdio.h>
#include<conio.h>
#include<math.h>

int main()
{int n,s,rm,qb;
printf("enter any no ");
scanf("%d",&n);

for(s=0;n!=0;n=n/10)
{
rm=n%10; 
qb=pow(rm,3);
s=s+qb;
}

printf("sum of qube of each digit is %d\n",s);
  return 0 ;
}
