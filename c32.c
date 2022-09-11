#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int n,f;
printf("enter no ");
scanf("%d",&n);

for(f=1;n>0;n=n-2)
{
f=f*n;   
}
printf("fact double value is %d\n",f);
  return 0 ;
}
    