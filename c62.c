#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{char s[100];
int ws,i;
ws=1;
printf("enter sentence ");
gets(s);

for(i=0;s[i]!=NULL;i++)
{
if(s[i]==' ')
{
ws=ws+1;
}
}
printf("%d words in sentence\n",ws);
  return 0 ;
}
    