#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int n[10],i,f,no;

for(i=0;i<=9;i++)
{
printf("enter no ");
scanf("%d",&n[i]);
}
f=0;
printf("enter no to be found ");
scanf("%d",&no);

for(i=0;i<=9;i++)
{
if(n[i]==no)
{
f=1;
break;
}
}

if(f==0)
{
printf("no not found ");
}
else
{
printf("no found ");
}
return 0 ;
}
    