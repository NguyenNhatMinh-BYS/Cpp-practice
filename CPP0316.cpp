#include<bits/stdc++.h>
using namespace std;
int sum(string s){
	int x=0;
	for(int i =0;i<s.length();i++){
		x+=(s[i]-'0');
	}
	if(x>=10) return sum(to_string(x));
	else return x;
	
	
}
int main(){
	int t ;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(sum(s)==9) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}
