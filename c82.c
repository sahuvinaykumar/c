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

printf("before deletion\n");
for(i=0;i<5;i++)
{
printf("%d\n",n[i]);
}

n[i-1]=NULL;
printf("after deletion\n");
for(i=0;i<5;i++)
{
printf("%d\n",n[i]);
}
return 0 ;
}
    