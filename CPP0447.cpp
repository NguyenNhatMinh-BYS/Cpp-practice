#include <bits/stdc++.h> 
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,m;
		cin>>n>>m;
		long long a[n];
		for(int i = 0; i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,greater<int>());
		for(int i =0 ;i<m;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
