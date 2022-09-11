#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int a,b,s,c;
c=0;
s=0;
X:printf("enter two no ");
scanf("%d%d",&a,&b);
if(a==0||b==0)
{c++;
goto X;
}
else
{
s=a*b;
}
printf("product is %d\n",s);
printf("%d times enter wrong input\n",c);
  return 0 ;
}
    