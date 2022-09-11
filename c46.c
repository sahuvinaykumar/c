#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{char nm[30],dm[30];
printf("enter nm ");
gets(nm);
printf("enter dm ");
scanf("%[^\n]%*c",dm);

puts(nm);
printf("%s",dm);
  return 0 ;
}
    