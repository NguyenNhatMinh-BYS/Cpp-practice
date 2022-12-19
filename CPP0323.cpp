#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
		long long m;
		cin>>n>>m;
		long long result = 0;
		for(int i = 0 ;i<n.length();i++){
			result = (result*10 + (n[i]-48))%m;
		}
		cout<<result;
		cout<<endl;
	}
} 
