#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()
{int a[3][3],b[3][3],i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter no ");
scanf("%d",&a[i][j]);
}
}



for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
b[j][i]=a[i][j];
}
}

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
return 0 ;
}
    
    