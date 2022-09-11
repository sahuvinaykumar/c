#include <stdio.h>
#include<conio.h>
#include<math.h>

int main()
{int n,s,rm,sq;
printf("enter any no ");
scanf("%d",&n);

for(s=0;n!=0;n=n/10)
{
rm=n%10; 
sq=pow(rm,2);
s=s+sq;
}

printf("sum of square of each digit is %d\n",s);
  return 0 ;
}
