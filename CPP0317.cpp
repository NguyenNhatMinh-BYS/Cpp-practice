#include<bits/stdc++.h>
using namespace std;
int dx(string s){
	for(int i = 0;i<s.length()/2;i++){
		if(s[i]!=s[s.length()-1-i]) return 0;
	}
	return 1;
}
int chan(string s){
	for(int i =0 ;i<s.length();i++){
		if(s[i]!='0' && s[i]!='2'&& s[i]!='4'&& s[i]!='6'&& s[i]!='8') return 0;
	}
	return 1;
}

int main(){
	int t ;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		if(chan(s)==1 && dx(s)==1) cout<<"YES";
		else cout<<"NO";
//cout<<dx(s);
		cout<<endl;
	}	
}
