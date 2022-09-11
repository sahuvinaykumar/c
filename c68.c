#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{char nm[30][10];
int i;

for(i=0;i<=9;i++)
{
printf("enter nm ");
scanf("%s",nm);
}

for(i=0;i<=9;i++)
{
strrev(nm[i]);
printf("reverse nm is %s\n",nm);
}

return 0 ;
}
    