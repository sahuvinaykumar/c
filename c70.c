#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{char nm[30][10],snm[30][10];
int i;

for(i=0;i<=9;i++)
{
printf("enter nm ");
scanf("%s",nm[i]);
}

for(i=0;i<=9;i++)
{
printf("enter snm ");
scanf("%s",snm[i]);
}

for(i=0;i<=9;i++)
{
strcat(nm[i]," ");
strcat(nm[i],snm[i]);
}

for(i=0;i<=9;i++)
{
printf("%s\n",nm[i]);
}

return 0 ;
}
    