#include<bits/stdc++.h>
using namespace std;
// chia de trij
// bai toan tinh a mu n
long long power(long long a,long long n){
	if(n==0) return 1;
	long long h = power(a,n/2); // de qui sao cho mu(n) = 0;
	if(n%2==1) return (h*h*a);
	else{
		return h*h;
	}
}
int main(){
	int a,n;
	cin>>a>>n;
	cout<<power(a,n);
}

