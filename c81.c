#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int n[10],nw,i;

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

printf("enter no to be inserted ");
scanf("%d",&nw);

n[i]=nw;

printf("after insertion\n");
for(i=0;i<=5;i++)
{
printf("%d\n",n[i]);
}
return 0 ;
}
    