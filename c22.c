#include <stdio.h>
#include<conio.h>
#include<math.h>

int main()
{int ba,pn,w,na;
ba=1000;
printf("enter pin no ");
scanf("%d",&pn);

if(pn==1234)
{
printf("enter withdraw amount ");
scanf("%d",&w);
if(ba>=w)
{na=ba-w;
printf("your rest amount is %d\n",na);
}
else
{
printf("your account don't have that much money");
}
}
else
{
printf("error, wrong pin entered.");
}
  return 0 ;
}
    