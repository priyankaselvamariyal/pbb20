#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d * %d = %d\n",n,i,n*i);
}
getch();
}
