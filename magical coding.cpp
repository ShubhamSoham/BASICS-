#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z,m=0,p,q,n=0;
	printf("enter a number as u wish");
	scanf("%d",&x);

s:	y=x%10;
	z=x/10;
	m=m+y;
	
	if(z>10){
	x=z;
	goto s;}
	else
	{
		m=m+z;
	}
	m=m*9;

t:	p=m%10;
	q=m/10;
	n=n+p;
	
	if(q>10){
	m=q;
	goto t;}
	else
	{
		n=n+q;
	}
	n=n+6;
	n=n*10;
	n=n/5;
	n=n+70;
	printf("your magical number is %d",n);
}
