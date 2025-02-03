#include<iostream>

using namespace std;

int main(){
	int n,temp,sum=0;
	cout<<"Enter digit: ";
	cin>>n;
	temp=n;
	
	while(n>0){
		int lastdigit=n%10;
		sum+=lastdigit;
		n=n/10;
	}

	cout<<"Sum of "<<temp<<" number is: "<<sum;
	return 0;
}
