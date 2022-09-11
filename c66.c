#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int n[10],i,o,e;
o=0;
e=0;

for(i=0;i<=9;i++)
{
printf("enter no ");
scanf("%d",&n[i]);
}
for(i=0;i<=9;i++)
{
if(n[i]%2==0)
{
e=e+n[i];
}
else
{
o=o+n[i];
}
}
printf("sum of odd no is %d\n",o);
printf("sum of even no is %d\n",e);

return 0 ;
}
    