#include<bits/stdc++.h>
using namespace std;
int k;
bool change(int a,int b){
	return abs(a-k)<abs(b-k);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n>>k;
		int a[n];
		for(int i = 0 ;i<n;i++){
			cin>>a[i];
		}
		stable_sort(a,a+n,change);
		for(auto x : a) cout<<x<<" ";
		cout<<endl;
	}
}
