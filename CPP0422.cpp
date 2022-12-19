#include<bits/stdc++.h>
 using namespace std;
 
 int main(){
 	long long  t;
 	cin>>t;
	while(t--){
	long long n;
	cin>>n;
	long long a[n];
	vector<int> v;
	for(long long i =0;i<n;i++){
		cin>>a[i];
		if(a[i]!=0) cout<<a[i]<<" ";
		else v.push_back(a[i]);
	}
	for(auto x : v) cout<<x<<" ";
	cout<<endl;
	}
}
