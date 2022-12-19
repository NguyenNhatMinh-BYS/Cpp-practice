#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
		long long check=1;
		long long b,m;
		cin>>n>>b>>m;
		while(b--){
			
		
		long long result = 0;
		for(int i = 0 ;i<n.length();i++){
			result = (result*10 + (n[i]-48))%m;
		}
		check*=result;
		}
		long long result = 0;
		string s=to_string(check);
		for(int i = 0 ;i<s.length();i++){
			result = (result*10 + (s[i]-48))%m;
		}
		cout<<result<<endl;
	}
} 

