#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	string s;
	cin>>s;
	multiset<char> set;
	int x=0;
	for(int i = 0;i<s.length();i++){
		if(s[i]>='A' && s[i]<='Z'){
			set.insert(s[i]);
		}
		else if(s[i]>='0' && s[i]<='9'){
			x+=s[i]-'0';
		}
	}
	for(auto x:set) cout<<x;
	cout<<x<<endl;
	}
}
