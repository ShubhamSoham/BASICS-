#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
for(i=1;i<=5;i++)
{
for(j=5;j>=i;j--)
{
cout<<"* ";
}
cout<<"\n";
}
getch();
}