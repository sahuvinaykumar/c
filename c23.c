#include <stdio.h>
#include<conio.h>
#include<math.h>

int main()
{int a,b,c;
printf("enter any three no ");
scanf("%d%d%d",&a,&b,&c);

if(a>b&&a>c)
{
printf("greatest no is %d\n",a);
}
else if(b>a&&b>c)
{
printf("greatest no is %d\n",b);
}
else
{
printf("greatest digit is %d\n",c);
}
  return 0 ;
}
    