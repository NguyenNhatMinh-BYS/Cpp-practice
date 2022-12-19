#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		
	
	string s;
	getline(cin,s);
	
//	cout<<s;
	for(int i =0 ; i<s.length();i++){
		s[i]=tolower(s[i]);
	}
	int check=s.rfind(" ");

		if(check){
			s[check+1]=toupper(s[check+1]);
			for(int i=check+1;i<s.length();i++){
				cout<<s[i];
			}
			
		}
		cout<<" ";
//	string a=" ";
	s[0]=toupper(s[0]);
	int checks;
	for(int i = 0 ;i<check;i++){
//		cout<<i<<endl;
		if(s.at(i)==' ') checks =i;
		
		
		if(checks){
			s[checks+1]=toupper(s[checks+1]);
			
		}
	}
	for(int i = 0 ;i<check;i++) cout<<s[i];
	cout<<endl;
}
}
