#include<bits/stdc++.h>
using namespace std;
long long m = 1000000007,a[1000];
int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long  h=1,g=0;
		for(long long i = 0 ;i<n;i++){
			cin>>a[i];
			h=(h*a[i]) % m;
			
		}
		g=a[0];
		for(long long i =1 ;i<n;i++) g=__gcd(g,a[i]) % m;
		long long result =pow(h,g);
		cout<<result%m<<endl;
	}
}
