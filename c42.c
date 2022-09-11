#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int a,b,s;
char c;
s=0;
X:printf("enter two no ");
scanf("%d%d",&a,&b);

s=a+b;
printf("sum is %d\n",s);

printf("do you want to continue y/n? ");
fflush(stdin);
scanf("%c",&c);

if(c=='y'||c=='Y')
{
goto X;
}
  return 0 ;
}
    