#include<iostream>

using namespace std;

int main(){
	int n, temp;
	cout<<"Enter Number: ";
	cin>>n;
	temp = n;
	int reverse=0;
	
	while(n>0){
		int lastdigit=n%10;
		reverse=reverse * 10+ lastdigit;
		n=n/10;
	}
	cout<< "Reverse number is: "<< reverse <<endl;
	
	if(temp!=reverse)
		cout << "Number is not Palindrome";
	
	
	else
		cout << "Number is Palindrome";
	
	
	return 0;
}
