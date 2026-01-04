// find minimum value of an array using iteration 

#include<stdio.h>
int main(){
	int a[20],min,size,i;
	printf("Enter the size of array: ");
	
	for(i=1;i<=size;i++){
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<=size;i++){
		if(min>=a[i+1])
			min=a[i];		
	}
	printf("%d",min);
}