#include<iostream>

using namespace std;

int main(){
	int n,sum=0;
	cout<<"Enter upto which number you want the sum: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		sum=sum+i;
	}
	cout<<"Sum of "<<n<<" number is: "<<sum;
	return 0;
}
