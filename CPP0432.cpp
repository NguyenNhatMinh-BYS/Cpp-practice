#include<bits/stdc++.h>
using namespace std;
bool check(int a,int b){
	return to_string(a) + to_string(b)>to_string(b) +to_string(a);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i =0 ;i<n;i++) cin>>a[i];
		stable_sort(a,a+n,check);
		for(int x : a) cout<<x;
		cout<<endl;
	}
}
