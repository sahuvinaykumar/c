#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int n[10],s,i;
for(i=0;i<=9;i++)
{
printf("enter no ");
scanf("%d",&n[i]);
}
s=32767;
for(i=0;i<=9;i++)
{
if(n[i]<s)
{
s=n[i];
}
}
printf("smallest no is %d\n",s);

  return 0 ;
}
    