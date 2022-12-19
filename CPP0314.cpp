#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ;
	cin>>t;
	cin.ignore();
	set<string> str;
	while(t--){
		string s;
		getline(cin,s);
		str.insert(s);
	}
	cout<<str.size();
}
