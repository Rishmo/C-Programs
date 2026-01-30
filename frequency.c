#include<stdio.h>
int frequency(int a[], int n)}{
int i,j=0;
for(i=0;i<n;i++){
	if(a[i]!=a[i+1])
		a[j++]=a[i];
}
a[j]=a[n-1];
return j;
}

void main(){
	int a[]={0,1,0,2,1,1,3,3,0,9};
	int n=sizeof(a)/sizeof(a(0));
	
	int i;
	for(i=0;i<j;i++)
		printf("%d ")
}