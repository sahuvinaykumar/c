#include <stdio.h>
#include<conio.h>

int main()
{int n,s,qt,rm;
printf("enter any no ");
scanf("%d",&n);

for(s=0;n!=0;n=n/10)
{
rm=n%10;
s=s+rm;
}

printf("sum of each digit is %d\n",s);
  return 0 ;
}
