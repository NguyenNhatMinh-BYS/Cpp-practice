#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream fp,ffp;
	fp.open("DATA1.in");
	ffp.open("DATA2.in");
	set<string> s;
	map<string,int> m;
	string tmp;
	while(fp>>tmp){
		for(int i =0 ;i<tmp.size();i++){
			tmp[i]=tolower(tmp[i]);
		}
		m[tmp]=1;
		s.insert(tmp);
	}
	fp.close();
	while(ffp>>tmp){
		for(int i =0 ;i<tmp.size();i++){
			tmp[i]=tolower(tmp[i]);
		}
		if(m[tmp]==1) m[tmp]=2;
		s.insert(tmp);
	}
	ffp.close();
	for(auto x : s) {
		cout<<x<<" ";
	}
	cout<<endl;
	for(auto x : m){
		if(x.second==2) cout<<x.first<<" ";
	}
}
