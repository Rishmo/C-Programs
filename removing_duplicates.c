#include<stdio.h>
int remDuplicates(int a[], int n)}{
int i,j=0;
for(i=0;i<n;i++){
	if(a[i]!=a[i+1])
		a[j++]=a[i];
}
a[j]=a[n-1];
return j;
}

void main(){
	int a[]={1,1,2,3,4,4,5,5,5,6,6,6,7};
	int n=sizeof(a)/sizeof(a(0));
	int j=remDuplicates(a,n);
	int i;
	for(i=0;i<j;i++)
		printf("%d ")
}