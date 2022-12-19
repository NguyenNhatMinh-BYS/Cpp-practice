#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	
	for(int i =0 ;i<s.length();i++){
		s[i]=tolower(s[i]);
//		cout<<s[i];
	}
	stringstream ten(s);
	string tmp;
	char c[1000];
	int check =0;
	while(ten>>tmp){
		c[check]=tmp[0];
		check++;
	}
	cout<<tmp;
	for(int i =0 ;i<check-1;i++){
		cout<<c[i];
	}
	cout<<"@ptit.edu.vn";
	
}
