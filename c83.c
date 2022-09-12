#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int n[10],p,nw,i;

for(i=0;i<5;i++)
{
printf("enter no ");
scanf("%d",&n[i]);
}

printf("before insertion\n");
for(i=0;i<5;i++)
{
printf("%d\n",n[i]);
}

printf("enter no to be inserted \n");
scanf("%d",&nw);
printf("enter position\n");
scanf("%d",&p);

for(i=5;i>p;i--)
{
n[i]=n[i-1];
}
n[i]=nw;
printf("after insertion\n");
for(i=0;i<=5;i++)
{
printf("%d\n",n[i]);
}
return 0 ;
}
    