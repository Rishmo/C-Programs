#include <iostream>
#include<cmath>
using namespace std;

int main(){
	
	int n, sum=0, temp;
	cout<<"Enter number: ";
	cin>>n;
	temp=n;
	while(n>0){
		int lastdigit=n%10;
		sum+=pow(lastdigit,3);
		n=n/10;
	}
	cout<<"sum of cuberoot of numbers is: "<<sum;
	
	if(sum==temp){
		cout<<"\nNumber is Armstrong";
	}
	
	else{
		cout<<"\nNumber is not Armstrong";
	}
	return 0;
}
