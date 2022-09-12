#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{char nm[30][10],fo[30];
int i,f,c;

for(i=0;i<=9;i++)
{
printf("enter nm ");
scanf("%s",nm);
}

f=0;
printf("enter nm to be found\n ");
scanf("%s",fo);

for(i=0;i<=9;i++)
{
c=strcmp(nm[i],fo);
if(c==0)
{
f=f+1;
break ;
}
}

if(f==0)
{
printf("nm is not found\n ");
}
else
{
printf("nm found\n");
}
return 0 ;
}
    