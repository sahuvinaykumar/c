#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int n[10],i,f,no,nw;

for(i=0;i<=9;i++)
{
printf("enter no ");
scanf("%d",&n[i]);
}
f=0;
printf("enter no to be found ");
scanf("%d",&no);
printf("enter no with replace");
scanf("%d",&nw);

for(i=0;i<=9;i++)
{
if(n[i]==no)
{
f=f+1;
n[i]=nw;

}
}

if(f==0)
{
printf("no not found ");
}
else
{
printf("no replaced successfully");
}
return 0 ;
}
    