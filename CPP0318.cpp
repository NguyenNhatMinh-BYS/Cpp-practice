#include<bits/stdc++.h>
using namespace std;
int same(string s){
	char c=s[5];
//	cout<<c;
	for(int i =5;i<11;i++){
//		cout<<s[i];
		if(s[i]!=c && s[i]!='.'){
//			cout<<s[i]<<endl;
			return 0;
		} 
	}
	return 1;
}
int raise(string s){
	char c=s[5];

	for(int i =6;i<11;i++){
		if(s[i]!='.'){
			if(s[i]<=c ) return 0;
			c=s[i];
				
		}
	
		
	}
	return 1;
}
int threeTwo(string s){
	if(s[5]== s[6] && s[5]==s[7] && s[9]==s[10]) return 1;
	return 0;
}
int lucky(string s){
	for(int i = 5;i<11;i++){
		if(s[i]!='.'){
			
		
		if(s[i]!='8' && s[i]!='6'){
//			cout<<s[i];
			return 0;
		} 
	}
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(same(s)==1 || raise(s)==1|| threeTwo(s)==1|| lucky(s)==1  )
		 cout<<"YES";
		else cout<<"NO";
		cout<<endl; 
	}
}
