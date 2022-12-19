#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,tmp,a;
	vector<string> v;
	
	getline(cin,s);
	for(int i =0 ;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
	stringstream  ss(s);
	int n=0;
	while(ss>>tmp){
		a=tmp;
		tmp[0]=toupper(tmp[0]);
		v.push_back(tmp);	
		n++;
	}
	for(int i = 0;i<n-1;i++){
		if(i!=n-2)
		cout<<v[i]<<" ";
		else cout<<v[i];
	}
	cout<<", ";
	for(int i =0;i<a.length();i++){
		a[i]=toupper(a[i]);
		cout<<a[i];
	}
	
}
