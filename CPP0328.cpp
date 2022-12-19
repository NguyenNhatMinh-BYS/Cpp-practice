#include<bits/stdc++.h>
using namespace std;
long long check(string s, long long  n){
	long long dem = 0;
	
	for(long long i = 0 ;i<s.length();i++){
		long long  result=0;
		for(long long  j = i ; j<s.length();j++){
			result= (result*10 + s[j]-'0')%n;
			if(result%n==0){
				dem++; 
				
			} 
			 
		} 
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<check(s,8) -check(s,24)<<endl;
		
	}
}
