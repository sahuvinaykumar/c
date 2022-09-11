#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int a[10],b[10],c[10],i;

for(i=0;i<=9;i++)
{
printf("enter no ");
scanf("%d",&a[i]);
}

for(i=0;i<=9;i++)
{
printf("enter no ");
scanf("%d",&b[i]);
}

for(i=0;i<=9;i++)
{
c[i]=a[i]+b[i];
}

for(i=0;i<=9;i++)
{
printf("%d\n",c[i]);
}



return 0 ;
}
    