#include<stdio.h>
int main(){
	int n,i,rowsize=1,count=0;
	printf("Enter last number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d",i);
		count++;
		if(count==rowsize){
			printf("\n");
			rowsize++;
			count=0;
		}
	}
	printf("\n");
}