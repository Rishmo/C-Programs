// WAP in c to calculate binomial coefficient using recursion

#include<stdio.h>
int bino(int,int);
int main(){
	int n,r,res;
	printf("Enter the value of n and r: ");
	scanf("%d %d",&n,&r);
	res=bino(n,r);
	printf("%d",res);
}

int bino(int n, int r){
	if(r==0 || r==n)
		return 1;
	else 
		return bino(n-1,r)+bino(n-1,(r-1));		
}