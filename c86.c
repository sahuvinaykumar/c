#include <stdio.h>
#include<conio.h>
#include<string.h>
void perfect();
void strong();

void perfect()
{
int n,i,s;
s=0;
printf("enter no ");
scanf("%d",&n);

for(i=1;i<n;i++)
{
if(n%i==0)
{
s=s+i;
}
}

if(s==n)
{
printf("perfect no ");
}
else
{
printf("not perfect no\n");
}
}

void strong()
{
int n,i,f,s,dm;
s=0;
printf("enter no ");
scanf("%d",&n);
dm=n;

for(s=0;n!=0;n=n/10)
{
i=n%10;
for(f=1;i>0;i--)
{
f=f*i;
}
s=s+f;
}

if(s==dm)
{
printf("strong no ");
}
else
{
printf("not strong no");
}
}

int main()
{
perfect();
strong();
return 0 ;
}
    
    