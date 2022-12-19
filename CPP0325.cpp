#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		
	
	string s;
	getline(cin,s);
	int num =0 ;
	for(int i =0 ;i<s.length();i+=2){
		int x = s[i]-'0';
		
		num+=x;
	}
	for(int i = 1;i<s.length();i+=2){
		int x = s[i]-'0';
		
		num-=x;
	}
	if(num%11==0) cout<<"1";
	else cout<<"0";
	cout<<endl;
}
} 
