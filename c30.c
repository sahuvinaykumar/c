#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int n,f,dm;
printf("enter no ");
scanf("%d",&n);
dm=n;
for(f=1;n>0;n--)
{
f=f*n;
}
printf("factorial of %d is %d\n",dm,f);
  return 0 ;
}
    