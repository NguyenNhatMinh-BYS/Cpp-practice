#include <bits/stdc++.h>

using namespace std;
int main(){
	
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s,tmp;
		int count=0;
		getline(cin,s);
		stringstream check(s);
		while(check>>tmp){
			count++;
		}
		cout<<count<<endl;
	}
	
}
