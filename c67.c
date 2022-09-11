#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int n[10],i,a[5],b[5];

for(i=0;i<=9;i++)
{
printf("enter no ");
scanf("%d",&n[i]);
}

for(i=0;i<=9;i++)
{
if(i<5)
{
a[i]=n[i];
}
else
{
b[i-5]=n[i];
}
}

for(i=0;i<5;i++)
{
printf("%d \t %d\n",a[i],b[i]);
}

return 0 ;
}
    