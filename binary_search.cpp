#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int n, int key)
{
	int s=0, e=n;
	while(s<=e){
		int mid= (s+e)/2;
		
		if(arr[mid]== key){
			return mid;
		}
		else if(arr[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	} 
	return -1;
}

int main(){
	
	int n, key, arr[n];
	
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
	cin>> key ;
	
	cout<<binarySearch(arr, n, key)<<endl;
	
	return 0;
}

