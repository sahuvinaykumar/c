#include <stdio.h>
#include<conio.h>
#include<math.h>

int main()
{char nm[30];
int o;
printf("enter nm ");
scanf("%s",nm);
printf("enter age ");
scanf("%d",&o);

if(o<18)
{
printf("%s is not eligible for vote.",nm);
}
else
{
printf("%s is eligible for vote.",nm);
}
  return 0 ;
}
    