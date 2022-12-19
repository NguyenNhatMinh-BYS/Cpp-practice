#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		set<string> set1,set2;
		string tmp1,tmp2;
		stringstream ss1(s1),ss2(s2);
		while(ss1>>tmp1){
			set1.insert(tmp1);
		}
		while(ss2>>tmp2){
			set2.insert(tmp2);
		}
		for(auto x : set1){
			int check =0;
			for(auto y: set2){
				if(x==y){
					check =1;
					break;
				}
			}
			if(check ==0) cout<<x<<" ";
		}
	cout<<endl;
	}
}
