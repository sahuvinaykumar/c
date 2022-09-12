#include <stdio.h>
#include<conio.h>
#include<string.h>
void prime(int);
void prime(int n)
{
int n1,i,f;
f=0;
n1=n;
for(i=2;i<(n1/2);i++)
{
if(n1%i==0)
{
f=1;
}
}
if(f==1)
{
printf("not prime no ");
}
else
{
printf("prime no");
}
}

int main()
{
int n;
printf("enter no ");
scanf("%d",&n);

prime(n);
return 0 ;
}
    
    