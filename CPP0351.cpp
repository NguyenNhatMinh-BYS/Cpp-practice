#include<bits/stdc++.h>
using namespace std;
string conver(string s){

	for(int i = 0;i<s.length();i++){
		s[i]=tolower(s[i]);
		
	}
	s[0]=toupper(s[0]);
	for(int i = 0 ; i<s.length();i++){

		if(s[i]==' '){
			s[i+1]=toupper(s[i+1]);
			 
		} 
	} 
	return s;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	int k;
	string s;
	cin>>k;
	cin.ignore();
	getline(cin,s);
	if(k==1){
		s=conver(s);

		for(int i = s.rfind(' ')+1; i<s.length();i++) cout<<s[i];
		cout<<" "; 
		s.erase(s.begin()+s.rfind(' '),s.end());
		stringstream ss(s);
		string tmp;
		while(ss>>tmp){
			cout<<tmp<<" ";
		}
	}
	else{
		 s=conver(s);
		 stringstream s1(s),s2(s);
		 string tmp1,tmp2;
		 int check =0;
		 while(s2>>tmp2){
		 	if(check==1) cout<<tmp2<<" ";
		 	check=1;
		 }
		 while(s1>>tmp1){
		 	cout<<tmp1<<" ";
		 	break;
		 }
		 
		 
	}
	cout<<endl;
	}
}
