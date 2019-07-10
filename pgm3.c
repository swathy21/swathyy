#include<stdio.h>
#include<conio.h>
void main()
{
int n,c=1,i;
scanf("%d",&n);
for(i=1;i<n+1;i++)
{
    c=c*i;
}
printf("%d",c);
getch();
}
