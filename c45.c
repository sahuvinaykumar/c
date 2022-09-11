#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int n[10],i,t,c;
for(i=0;i<10;i++)
{
printf("enter no ");
scanf("%d",&n[i]);
for(c=1;c<=10;c++)
{
t=n[i]*c;
printf("%d*%d=%d\n",n[i],c,t);
}
}
  return 0 ;
}
    