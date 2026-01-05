// to print sum of n numbers using recursion

#include<stdio.h>
int sum(int);
int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	printf("\nsum of n terms is: %d",sum(num));
	return 0;
}

int sum(int num){
	if(num==1)
		return num;
	else
	return num+sum(num-1);
}