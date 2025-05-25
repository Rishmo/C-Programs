#include <bits/stdc++.h>

using namespace std;

int main(){
	int mx =-19999999;
	
	int n, arr[n];
	cout<<"Enter value of n: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		
		mx = max(mx, arr[i]);
		cout<< mx <<endl;
		
	}
	
	return 0;
}
