// input 8 bit unsigned binary and print result in decimal using array

#include<stdio.h>
int power(int);

int main(){
	int i,j,a[8],exp=0,sum=0;
	printf("Enter the value of array in 0 and 1: ");
	for(i=0;i<8;i++){
		scanf("%d",&a[i]);	
		}
	for(j=7;j>=0;j--){
		if (a[j]==1){
			sum=sum+a[j]*power(exp);
			exp++;
		}
		else{
			exp++;
		}
	}
		printf("%d",sum);
	}	
	int power(int exp){
		int result=1;
		if(exp>0){
			for(int i=1;i<=exp;i++){
				result=result*2;
			}
		
		}
	}