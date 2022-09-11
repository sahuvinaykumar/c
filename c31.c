#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int n,s,i;
printf("enter any no ");
scanf("%d",&n);
s=0;
for(i=1;i<=n;i++)
{
s=s+i;
}
printf("sum of series is %d\n",s);
  return 0 ;
}
    