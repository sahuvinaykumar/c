#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int i,j,c;
char nm[30][10],s[30];

for(i=0;i<=9;i++)
{
printf("enter nm ");
scanf("%s",nm[i]);
}

for(i=0;i<9;i++)
{
for(j=(i+1);j<=9;j++)
{
c=strcmp(nm[i],nm[j]);
if(c<0)
{
strcpy(s,nm[i]);
strcpy(nm[i],nm[j]);
strcpy(nm[j],s);
}
}
}

for(i=0;i<=9;i++)
{
printf("%s\n",nm[i]);
}

return 0 ;
}
    