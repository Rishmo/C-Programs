// WAP in c for TOWER OF HANOI

#include<stdio.h>
int tower(int,char,char,char);
int main(){
	int n,a,b,c,res;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	res=tower(n,a,b,c);
	printf("No. of steps : %d",res);
}

int tower(int n, char a, char b, char c){
	if(n==1)
		return 1;
	else 
		return tower(n-1,a,b,c);
}