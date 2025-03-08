#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,arr[n];
	cout<<"Enter size of array: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Array values: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	int max= INT_MIN ,min= INT_MAX;
	
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	
	cout<<"\nMaximum number: "<<max;
	
	cout<<"\nMinimun number: "<<min;
	
	return 0;
}
