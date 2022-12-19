#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	
	


	string s1,s2;
	cin>>s1>>s2;	
	vector<int> v(s1.size()+s2.size(),0);
	
	for(int i=s1.size()-1;i>=0;i--){
		for(int j=s2.size()-1;j>=0;j--){
			v[i+j+1] += (s1[i]-'0') * (s2[j]-'0');
			v[i+j]+=v[i+j+1] /10;
			v[i+j+1] %=10;
		}
	}
	int i=0;
	string result="";
	while(v[i]==0) i++;
	while(i<v.size()) result+=to_string(v[i++]);
	cout<<result<<endl;
}
}
