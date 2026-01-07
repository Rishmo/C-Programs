#include<stdio.h>
#include<conio.h>
//void main(){
int main()	{
	char ch;
	//int num;
	printf("Enter any character value: ");
	scanf("%c",&ch);
	//num=ch;
	ch=char(ch);
	printf("%d",ch);
	//printf("ASCII value is %d",num);
	return 0;
}
