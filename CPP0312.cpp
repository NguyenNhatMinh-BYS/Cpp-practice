#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		
		string s;
		getline(cin,s);
		int k;
		cin>>k;
		cin.ignore();
		set<char> set;
		for(int i =0 ;i<s.length();i++){
			set.insert(s[i]);
		}
		if(26-set.size()<=k) cout<<1<<endl;
		else cout<<0<<endl;

	}
}
