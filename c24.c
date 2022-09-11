#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{char n[30];
int i;
printf("enter any no ");
scanf("%s",n);

printf("\n");
strrev(n);
for(i=0;n[i]!=NULL;i++)
{
if(n[i]=='0')
{
printf("zero ");
}
else if(n[i]=='1')
{
printf("one ");
}
else if(n[i]=='2')
{
printf("two ");
}
else if(n[i]=='3')
{
printf("three ");
}
else if(n[i]=='4')
{
printf("four ");
}
else if(n[i]=='5')
{
printf("five ");
}
else if(n[i]=='6')
{
printf("six ");
}
else if(n[i]=='7')
{
printf("seven ");
}
else if(n[i]=='8')
{
printf("eight ");
}
else if(n[i]=='9')
{
printf("nine ");
}
}
  return 0 ;
}
    