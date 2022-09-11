#include <stdio.h>
#include<conio.h>
#include<math.h>

int main()
{int n,f,s,l,sm,sq;
sm=0;
printf("enter three digit no ");
scanf("%d",&n);
l=n%10;
sm=sm+l;
n=n/10;

s=n%10;
sq=s*s;
n=n/10;

f=n%10;
sm=sm+f;
n=n/10;

printf("sum is %d\n",sm);
printf("square of second digit is %d\n",sq);
  return 0 ;
}
