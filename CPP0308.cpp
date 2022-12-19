#include <bits/stdc++.h>

using namespace std;
int main(){
	int t,b[100001];
	cin>>t;
	cin.ignore();
	while(t--){
		
	
	string s;
	getline(cin,s);
//	cout<<s;
	for(int i =0 ;i<s.length();i++){
		b[i]=1;
	}
	for(int i=0;i<s.length();i++){
		int check=0;
		if(b[i]){
			
		
		for(int j=i+1;j<s.length();j++){
			if(s.at(i)==s.at(j)){
				b[j]=0;
				check=1;
//				break;
				}
			}
		if(check==0) cout<<s[i];
		}}
		cout<<endl;
	}
	}
