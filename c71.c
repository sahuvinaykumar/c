#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int n[10],i,j,s;

for(i=0;i<=9;i++)
{
printf("enter no ");
scanf("%d",&n[i]);
}

for(i=0;i<9;i++)
{
for(j=(i+1);j<=9;j++)
{
if(n[i]>n[j])
{
s=n[i];
n[i]=n[j];
n[j]=s;
}
}
}

for(i=0;i<=9;i++)
{
printf("%d\n",n[i]);
}

return 0 ;
}
    