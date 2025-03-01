#include <iostream>

using namespace std;

int comb(int n){
	int fact=1;
	for(int i=2;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}

int main(){
	int n,r;
	cin>>n>>r;
	int ans=comb(n)/(comb(r)*comb(n-r));
	cout<<ans<<endl;
	
	return 0;
}
