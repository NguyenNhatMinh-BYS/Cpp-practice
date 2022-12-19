#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		set<char> set;
		int check =0;
		for(int i = 0 ;i<s.size();i++){
			if(s[i]>='0' && s[i]<='9' && s[0] !='0'){
				set.insert(s[i]);
			}
			else {
				cout<<"INVALID\n";
				check = 1;
				break;
				
			}
		}
		if(check==0){
			if(set.size()==10) cout<<"YES\n";
			else cout<<"NO\n";
		}
		
	}
} 
