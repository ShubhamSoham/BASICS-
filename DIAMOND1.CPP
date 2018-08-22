#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,k;
for(i=1;i<=5;i++)
{
for(j=1;j<=5-i;j++)
{
cout<<" ";
}
for(k=1;k<=(2*i)-1;k++)
{
cout<<"*";
}
cout<<"\n";
}
for(i=5-1;i>=1;i--)
{
for(j=1;j<=5-i;j++)
{
cout<<" ";
}
for(k=1;k<=(2*i)-1;k++)
{
cout<<"*";
}
cout<<"\n";
}
for(i=5-1;i>=1;i--)
{
for(j=1;j<=5-i;j++)
{
cout<<" ";
}
for(k=1;k<=2*(i-j-2)-1;k++)
{
cout<<"*";
}
cout<<"\n";
}
getch();
}