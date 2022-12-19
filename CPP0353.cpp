#include<bits/stdc++.h>
using namespace std;
string check(string s){
		for(int i = 0 ;i<s.length()/2;i++){
			if(s[i]!=s[s.length()-1-i]) return "NO";
			
		}
		return "YES";
}
int main(){
	int t ;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		for(int i = 0;i<s.length();i++){
			s[i]=tolower(s[i]);
			if(s[i]>='a' && s[i]<='c'){
				s[i]='2';
			}
			else if(s[i]>='d' && s[i]<='f'){
					s[i]='3';
			}
			else if(s[i]>='g' && s[i]<='i'){
					s[i]='4';
			}
			else if(s[i]>='j' && s[i]<='l'){
					s[i]='5';
			}
			else if(s[i]>='m' && s[i]<='o'){
					s[i]='6';
			}
			else if(s[i]>='p' && s[i]<='s'){
					s[i]='7';
			}
			else if(s[i]>='t' && s[i]<='v'){
					s[i]='8';
			}
			else if(s[i]>='w' && s[i]<='z'){
					s[i]='9';
			}
		}
	cout<<check(s)<<endl;
		
		
		
		
	}
}
