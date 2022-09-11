#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{char nm[30],pw[30],l,l1;
printf("enter user nm ");
scanf("%s",nm);

printf("enter password ");
scanf("%s",pw);

l=strlen(nm);
l1=strlen(pw);

if(l>8)
{
if(l1>10)
{
printf("user nm is %s\n",nm);
printf("password is %s\n",pw);
}
else
{
printf("error, password is too short\n");
}
}
else
{
printf("error,nm is too short\n");
}

  return 0 ;
}
    