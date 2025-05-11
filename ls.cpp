#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, k, arr[n];
	
	cout<<"Enter the value of n: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"Entered array: ";
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<"\nEnter value which you want to search: ";
	cin>> k ;
	
	if(k==arr[n]){
		cout<<"value found";
	}
	
	else{
		cout<<"value not found";
	}
	
	return 0;
}

