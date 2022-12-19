#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int> p1,pair<string,int> p2){
	 if(p1.first.length()>p2.first.length()) return 1;
	  if(p1.first.length()<p2.first.length()) return 0;
	  else{
	  	for(int i =0 ;i<p1.first.length();i++){
	  		if(p1.first[i]>p2.first[i]) return 1;
			  if(p1.first[i]<p2.first[i]) return 0; 
		  }
	  }
}
int main(){
	string s;
	map<string,int> p;
	while(cin>>s){
		int check =0;
		for(int i =0;i<s.size()/2;i++){
			if(s[i]!=s[s.size()-1-i]){
				check =1;
				break;
			}
		}
		if(check==0&&s.size()>1) p[s]++;
//		if(s=="?") break;
	}
	vector<pair<string,int>> v;
	for(auto x : p) v.push_back(x);
	sort(v.begin(),v.end(),cmp);
	for(auto x : v) {
		cout<<x.first<<" "<<x.second<<endl;
	}
}
