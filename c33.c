#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int n,i,t;
printf("enter no ");
scanf("%d",&n);

for(i=1;i<=10;i++)
{
t=n*i;
printf("%d*%d=%d\n",n,i,t);
}
printf("\n\n");

for(i=10;i>0;i--)
{
t=n*i;
printf("%d*%d=%d\n",n,i,t);
}
  return 0 ;
}
    