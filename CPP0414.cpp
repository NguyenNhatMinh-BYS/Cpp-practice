#include<bits/stdc++.h>
 using namespace std;
 
 int main(){
 	int t;
 	cin>>t;
	while(t--){
		int n;
		cin>>n;
		set<int> s;
		for(int i =0 ;i <n;i++){
			string  str;
			cin>>str;
			for(int i =0 ;i<str.size();i++){
				int x = str[i]-'0';
				s.insert(x);
			}
		}
		for(auto x : s) cout<<x<<" ";
		cout<<endl;
		}
		
	}
