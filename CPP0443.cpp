#include <bits/stdc++.h> 
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long  n,sum=0;
		cin>>n;
		for(int i = 1 ;i<=n;i++){
			sum+=i;
		}
		for(int i =1;i<n;i++){
			long long a;
			cin>>a;
			sum-=a;
		}
		cout<<sum<<endl;
	}
}
