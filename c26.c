#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int a,b,s;
s=0;
printf("enter two no ");
scanf("%d%d",&a,&b);

if(a>10)
{
if(b<10)
{
s=a+b;
printf("sum ia %d\n",s);
}
else
{
printf("%d is not less than 10",b);
}
}
else
{
printf("%d is not greater than 10",a);
}
  return 0 ;
}
    