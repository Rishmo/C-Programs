#include<stdio.h>
#include<conio.h>
int main()
{
	float a,u,t,v;
	printf("Enter the value of a, u, and t: ");
	scanf("%f%f%f",&a,&u,&t);
	v=u+a*t;
	printf("velocity=%f",v);
	getch();
	return 0;
}