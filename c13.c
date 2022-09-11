#include <stdio.h>
#include<conio.h>

int main()
{int n,p,rm,qt;
printf("enter any no ");
scanf("%d",&n);

for(p=1;n!=0;n=n/10)
{
rm=n%10;   
p=p*rm;
}

printf("product of each digit is %d\n",p);
  return 0 ;
}
