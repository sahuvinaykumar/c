#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int n[10],i,s;
s=0;

for(i=0;i<=9;i++)
{
printf("enter no ");
scanf("%d",&n[i]);
}
for(i=0;i<=9;i++)
{
s=s+n[i];
}
printf("sum is %d\n",s);

return 0 ;
}
    