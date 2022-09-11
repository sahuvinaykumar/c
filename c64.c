#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int n[10],i,g;
g=0;

for(i=0;i<=9;i++)
{
printf("enter no ");
scanf("%d",&n[i]);
}
for(i=0;i<=9;i++)
{
if(n[i]>g)
{
g=n[i];
}
}
printf("greatest no is %d\n",g);

return 0 ;
}
    