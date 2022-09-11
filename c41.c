#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int a,b,s;
s=0;
X:printf("enter two no ");
scanf("%d%d",&a,&b);
if(a==0||b==0)
{
goto X;
}
else
{
s=a+b;
printf("sum is %d\n",s);
}
  return 0 ;
}
    